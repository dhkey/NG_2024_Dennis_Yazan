#include <iostream>
#include <unistd.h>
#include <cmath>

using namespace std;

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    int rows = 10;
    int columns = 12;
    int sizeOfTriangle = 5;

    int angle = 0;

    int centerX = columns / 2;
    int centerY = rows / 2;

    while (true) {
        clearScreen();

        for (int x = 0; x < sizeOfTriangle; x++) {
            int starsCount = x + 1;

            for (int y = 0; y < starsCount; y++) {
                double radians = angle * (M_PI / 180);
                double cosVariable = cos(radians);
                double sinVariable = sin(radians);

                int nX = round(centerX + (x * cosVariable - y * sinVariable));
                int nY = round(centerY + (x * sinVariable + y * cosVariable));

                if (nY >= 0 && nY < rows && nX >= 0 && nX < columns) {
                    cout << "\033[" << nY + 1 << ";" << nX + 1 << "H"; //moving to poing
                    cout << '*';
                }
            }
        }

        cout.flush(); //instant output before clearing

        if (angle % 90 == 0) {
            usleep(1000000);
        } else {
            usleep(200000 / 2);
        }

        angle += 10;
        if (angle >= 360) angle = 0;
    }

    return 0;
}
