#include <iostream>

using namespace std;


void printNewYearTree(int curRow, int rows){

    if (curRow == rows+1)
        return;

    for (int spaces = 0; spaces < rows-curRow; spaces++)
        // cout << " ";
        cout << "-";

    for (int stars = 0; stars < curRow * 2 - 1; stars++)
        cout << "*";

    cout << endl;

    printNewYearTree(curRow+1, rows);

}

int main()
{
    int rows = 0;
    cout << "Enter count of rows for new year tree: ";
    cin >> rows;

    printNewYearTree(1, rows);

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


