#include <iostream>

using namespace std;

void printSpaces(int count) {
    if (count <= 0)
        return;
    cout << "-";
    printSpaces(count - 1);
}

void printStars(int count) {
    if (count <= 0)
        return;
    cout << "*";
    printStars(count - 1);
}

void printRow(int curRow, int rows) {
    if (curRow > rows)
        return;

    printSpaces(rows - curRow);
    printStars(curRow * 2 - 1);
    cout << endl;

    printRow(curRow + 1, rows);
}

int main() {
    int rows = 0;
    cout << "Enter count of rows for new year tree: ";
    cin >> rows;

    printRow(1, rows);

    return 0;
}


// void printNewYearTree(int rows){

//     if (rows == 0)
//         return;

//     for (int spaces = 0; spaces < rows-1; spaces++)
//         cout << "-";
//     for (int stars = 0; stars < rows-(rows-1); stars++)
//         cout << "*";

//     cout << endl;

//     printNewYearTree(rows-1);

// }


