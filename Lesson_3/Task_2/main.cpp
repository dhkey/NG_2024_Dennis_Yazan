// Я хочу хитрую программу, которая умеет выполнять самые простые операции с матрицами!
// Мол, мы вводим две матрицы, и получаем их сумму или разницу. Каждое действие может
// выполнять отдельная функция, а хранить сами матрицы я предлагаю в структурах :3

#include <iostream>

using namespace std;

struct Matrix{
    int rows;
    int columns;
    vector<vector<int> > matrix;

    void saveMatrix(){

        cout << "Enter size of matrix. Example: 5x5, (rows x colums): ";
        char input[3];
        cin >> input;

        rows = int(input[0] - '0');
        columns = int(input[2] - '0');

        innitMatrix(rows, columns);

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                cout << "Enter value for " << i+1 << "th row's " << j+1 << "th column's element: ";
                cin >> matrix[i][j];
            }
        }

    }

    void innitMatrix(int rows, int columns){
        matrix.resize(rows, vector<int>(columns));
    }

    Matrix addMatrixToMatrix(Matrix B){

        Matrix result;
        result.rows = rows;
        result.columns = columns;
        result.innitMatrix(rows, columns);

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                result.matrix[i][j] = matrix[i][j] + B.matrix[i][j];
            }
        }
        return result;
    }

    Matrix subtractFroMatrix(Matrix B){

        Matrix result;
        result.rows = rows;
        result.columns = columns;
        result.innitMatrix(rows, columns);

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                result.matrix[i][j] = matrix[i][j] - B.matrix[i][j];
            }
        }

        return result;
    }

    void display(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

};

bool checkMatrixesForValidation(Matrix A,  Matrix B){
    return (A.rows == B.rows && A.columns == B.columns ? true : false);
}

int main()
{
    Matrix A;
    Matrix B;

    cout << "Enter matix A: " << endl;
    A.saveMatrix();

    cout << "Enter matix B: " << endl;
    B.saveMatrix();
    cout << endl;

    char action;
    cout << "Choise the function between matrixes:\n\n1: summarize (+) \n2: subtraction (-) \n\nExample of input: 1: ";
    cin >> action;

    if (checkMatrixesForValidation(A, B))
        cout <<  "Matrix are compatible, executing..." << endl;
    else {
        cout << "Error! Matrixes are incompatible!" << endl;
        return 0;
    }

    Matrix result = (action == '1' ? A.addMatrixToMatrix(B) : A.subtractFroMatrix(B));
    result.display();


    return 0;
}
