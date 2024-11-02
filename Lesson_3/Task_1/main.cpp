#include <iostream>
#include <math.h>
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
