#include <iostream>
#include <unistd.h>
#include <cmath>
using namespace std;

void printMatrix(char** matrix, int rows, int columns) { // вивод матриці
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void clearMatrix(char** matrix, int rows, int columns) { // очистка матриці
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = ' ';
        }
    }
}

int main() {
    int rows = 10;
    int columns = 12;
    int sizeOfTreangle = 5;

    char** matrix = new char*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new char[columns];
    }// дінамічно забиваєм

    int angle = 0; // угл наклона

    int centerX = columns / 2; // центр оборота відносно якого будім спінить
    int centerY = rows / 2; // центр оборота відносно якого будім спінить

    while (true) {
        cout << "\033[2J\033[1;1H"; //чістім

        clearMatrix(matrix, rows, columns);

        for (int x = 0; x < sizeOfTreangle; x++) {
            int starsCount = x + 1;

            for (int y = 0; y < starsCount; y++) {

                double radians = angle * (M_PI / 180); // в радіани переводим кут,
                double cosVariable =  cos(radians);
                double sinVariable = sin(radians);
                //x*cos це шось тіпа проекція відстані точки по іксу на нову вісь, враховуючи кут
                //y*sin це вже проекція відстані точки по ігрік
                //коли точка піднімається вверх по ігріку, вона також зсувається за рахунок мінусана проекції ігіріка від іксової по іксу назад
                int nX = round(centerX + (x * cosVariable - y * sinVariable));
                //sin угла визначає соотношение протилежного катета до гіпотенузи,тобто ми його юхаєм для визначення вертикального зсуву точки
                //x*sin визначає, наскільки точка зміститься вертикально через горизонтальний вплив, типу того

                int nY = round(centerY + (x * sinVariable + y * cosVariable));
                // cout << nY << endl;
                // cout << nX << endl;

                if (nY >= 0 && nY < rows && nX >= 0 && nX < columns) { // чи не улетіли ми за рамки
                    matrix[nY][nX] = '*';
                }
            }
        }

        printMatrix(matrix, rows, columns); // аутпут

        if (angle % 90 == 0) {
            usleep(1000000); //для кращого віз сприйняття лучше трішки застопить тріугольнік в ровних позиціях
        } else {
            usleep(200000/2);
        }
        angle += 10; //+-0,1745329252 // міняємо сам кут аби плавно було
        if (angle >= 360) angle = 0; //шоб змінна не улітучілась в агромні значення угла
    }

}
