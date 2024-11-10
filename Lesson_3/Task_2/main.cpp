#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Matrix {
    int rows;
    int columns;
    vector<vector<int>> matrix;
};

void initMatrix(Matrix &mat, int rows, int columns) {
    mat.rows = rows;
    mat.columns = columns;
    mat.matrix.resize(rows, vector<int>(columns));
}

void saveMatrix(Matrix &mat) {
    cout << "Enter size of matrix. Example: 5x5, (rows x columns): ";
    string input;
    cin >> input;

    mat.rows = int(input[0]) - '0';
    mat.columns = int(input[2]) - '0';


    initMatrix(mat, mat.rows, mat.columns);

    for (int count_rows = 0; count_rows < mat.rows; count_rows++) {
        for (int count_columns = 0; count_columns < mat.columns; count_columns++) {
            cout << "Enter value for " << count_rows + 1 << "th row's " << count_columns + 1 << "th column's element: ";
            cin >> mat.matrix[count_rows][count_columns];
        }
    }
}

Matrix addMatrixToMatrix(const Matrix &A, const Matrix &B) {
    Matrix result;
    initMatrix(result, A.rows, A.columns);

    for (int count_rows = 0; count_rows < A.rows; count_rows++) {
        for (int count_columns = 0; count_columns < A.columns; count_columns++) {
            result.matrix[count_rows][count_columns] = A.matrix[count_rows][count_columns] + B.matrix[count_rows][count_columns];
        }
    }
    return result;
}

Matrix subtractFromMatrix(const Matrix &A, const Matrix &B) {
    Matrix result;
    initMatrix(result, A.rows, A.columns);

    for (int count_rows = 0; count_rows < A.rows; count_rows++) {
        for (int count_columns = 0; count_columns < A.columns; count_columns++) {
            result.matrix[count_rows][count_columns] = A.matrix[count_rows][count_columns] - B.matrix[count_rows][count_columns];
        }
    }
    return result;
}

void display(const Matrix &mat) {
    for (int count_rows = 0; count_rows < mat.rows; count_rows++) {
        for (int count_columns = 0; count_columns < mat.columns; count_columns++) {
            cout << mat.matrix[count_rows][count_columns] << " ";
        }
        cout << endl;
    }
}

bool checkMatricesForValidation(const Matrix &A, const Matrix &B) {
    return (A.rows == B.rows && A.columns == B.columns);
}

int main() {
    Matrix A;
    Matrix B;

    cout << "Enter matrix A: " << endl;
    saveMatrix(A);

    cout << "Enter matrix B: " << endl;
    saveMatrix(B);
    cout << endl;

    char action;
    cout << "Choose the function between matrices:\n\n1: addition (+) \n2: subtraction (-) \n\nExample of input: 1: ";
    cin >> action;

    if (checkMatricesForValidation(A, B))
        cout << "Matrices are compatible, executing..." << endl;
    else {
        cout << "Error! Matrices are incompatible!" << endl;
        return 0;
    }

    Matrix result = (action == '1' ? addMatrixToMatrix(A, B) : subtractFromMatrix(A, B));
    display(result);

    return 0;
}
