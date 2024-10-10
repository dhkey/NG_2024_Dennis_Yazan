//прикидував +- як реалізовувати анімації

#include <iostream>
#include <cmath>

#include <unistd.h> // containts delay function for unix systems
// #include <windows.h> // contains delay function for windows

#include <cstdlib>
using namespace std;

const short int rows = 5;
const short int columns = 5;

void cleanScreen(){
    cout << "\033[2J\033[1;1H";
    return;
}

void printMatrix(char matrix[rows][columns]){
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
    int elemAftercenter = floor(columns/2);
    int centerColumns = ceil(columns/2);
    int centerRows = ceil(rows/2);
    char matrix[rows][columns];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j == centerColumns) {
                matrix[i][j] = '*';
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    int step = 0;

    while (1){

        if ( step == 4 ) {
            step = 0;
        }

        switch(step){
        case 0:
            for (int i=0; i<rows; i++){
                matrix[i][centerColumns] = ' ';
                matrix[i][centerColumns+elemAftercenter-i] = '*';
            }
            break;
        case 1:
            for (int i=0; i<columns; i++){
                matrix[i][centerColumns+elemAftercenter-i] = ' ';
                matrix[centerRows][i] ='*';
            }
            break;
        case 2:
            for (int i=0; i<rows; i++){
                matrix[centerRows][i] = ' ';
                matrix[i][i] = '*';
            }
            break;
        case 3:
            for (int i=0; i<columns; i++){
                matrix[i][i] = ' ';
                matrix[i][centerColumns] ='*';
            }
            break;
        }

        step = step + 1;



        printMatrix(matrix);

        cleanScreen();
        usleep(1000000/2);
    }
}
