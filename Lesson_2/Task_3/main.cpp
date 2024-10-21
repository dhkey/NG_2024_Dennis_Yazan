#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr[20];

    int arrMaxValue = 0;

    for (int count = 0; count < 20; count++ ){
        int value;
        cout << "Enter " << count+1 << "th value: ";
        cin >> value;

        if (value > arrMaxValue)
            arrMaxValue = value;

        if (value == 0){
            arr[count] = 0;
            break;
        }

        else arr[count] = value;
    }

    cout<<endl;

    int count = 0;

    while (arr[count] !=0 && count < 20){
        for (int spacesCount = 0; spacesCount < ceil((arrMaxValue-arr[count])/2); spacesCount++)
            cout << " ";
        for (int starsCount = 0; starsCount < arr[count]; starsCount++)
            cout << "*";

        cout << endl;

        count ++;
    }


}
