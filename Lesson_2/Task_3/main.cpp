#include <iostream>

using namespace std;

int main()
{
    int arr[20];

    int arrMaxValue = 0;

    int count = 0;

    while(count < 20){
        int value;
        cout << "Enter " << count+1 << "th value: ";
        cin >> value;

        if (value > arrMaxValue)
            arrMaxValue = value;

        arr[count] = value;

        if (value == 0) break;

        count ++;
    }

    cout<<endl;

    count = 0;

    while (arr[count] !=0 && count < 20){
        for (int spacesCount = 0; spacesCount < (arrMaxValue-arr[count])/2; spacesCount++)
            cout << " ";
        for (int starsCount = 0; starsCount < arr[count]; starsCount++)
            cout << "*";

        cout << endl;

        count ++;
    }
}
