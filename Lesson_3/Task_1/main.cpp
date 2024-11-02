#include <iostream>
#include <math.h>
using namespace std;

void printNewYearTree(int rows){

    if (rows == 0)
        return;

    for (int spaces = 0; spaces < rows-1; spaces++)
        cout << "-";
    for (int stars = 0; stars < rows-(rows-1); stars++)
        cout << "*";

    cout << endl;

    printNewYearTree(rows-1);

}

int main()
{
    int rows = 0;
    cout << "Enter count of rows for new year tree: ";
    cin >> rows;

    printNewYearTree(rows);

    return 0;
}
