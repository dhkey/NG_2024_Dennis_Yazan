#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    for (int count = 0; count < 5; count ++) {
        cout << "Enter " << count + 1 << "st number: ";
        cin >> arr[count];
    }

    int arrCopy[5];
    for (int count = 0; count < 5; count++) {
        arrCopy[count] = arr[count];
    }

    bool isNotZeroLike = true;
    while (isNotZeroLike){

        isNotZeroLike = false;

        for (int isZeroCount=0; isZeroCount < 5; isZeroCount++){

            if (arrCopy[isZeroCount] != 0){
                cout<<"*";
                arrCopy[isZeroCount]-=1;
                isNotZeroLike = true;
            }
            else{
                cout << " ";
            }
        }

        cout << endl;
    }
}
