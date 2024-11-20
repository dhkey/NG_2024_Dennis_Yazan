#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Matrix {
    int rows;
    int columns;
    vector<vector<int>> matrix;

    Matrix operator+(const Matrix &other) const {
        if (rows != other.rows || columns != other.columns) {
            throw invalid_argument("matrices must have the same dimensions for addition");
        }

        Matrix result;
        result.rows = rows;
        result.columns = columns;
        result.matrix.resize(rows, vector<int>(columns));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix &other) const {
        if (rows != other.rows || columns != other.columns) {
            throw invalid_argument("matrices must have the same dimensions for subtraction");
        }

        Matrix result;
        result.rows = rows;
        result.columns = columns;
        result.matrix.resize(rows, vector<int>(columns));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }
        return result;
    }
};

void initMatrix(Matrix &mat, int rows, int columns) {
    mat.rows = rows;
    mat.columns = columns;
    mat.matrix.resize(rows, vector<int>(columns));
}

void saveMatrix(Matrix &mat) {
    cout << "Enter size of matrix. Example: 5x5: ";
    string input;
    cin >> input;

    mat.rows = int(input[0]) - '0';
    mat.columns = int(input[2]) - '0';

    initMatrix(mat, mat.rows, mat.columns);

    for (int i = 0; i < mat.rows; ++i) {
        for (int j = 0; j < mat.columns; ++j) {
            cout << "Enter value for " << i + 1 << "th row's " << j + 1 << "th column's element: ";
            cin >> mat.matrix[i][j];
        }
    }
}

void display(const Matrix &mat) {
    for (const auto &row : mat.matrix) {
        for (const auto &elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    Matrix A, B;

    cout << "Enter matrix A: " << endl;
    saveMatrix(A);

    cout << "Enter matrix B: " << endl;
    saveMatrix(B);
    cout << endl;

    char action;
    cout << "Choose the function between matrices:\n\n1: addition (+) \n2: subtraction (-) \n\nExample of input: 1: ";
    cin >> action;

    Matrix result;
    result = (action == '1') ? (A + B) : (A - B);
    display(result);

}
