#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    for (int count = 0; count < 5; count++) {
        cout << "Enter " << count + 1 << "st number: ";
        cin >> arr[count];
    }

    int maxVal = 0;
    for (int count = 0; count < 5; count++) {
        if (arr[count] > maxVal) {
            maxVal = arr[count];
        }
    }

    for (int row = 1; row <= maxVal; row++) {
        for (int col = 0; col < 5; col++) {
            if (arr[col] >= row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
