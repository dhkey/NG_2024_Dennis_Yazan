#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    for (int count = 0; count < 5; count ++) { cout << "Enter " << count << "st number: ";  cin >> arr[count]; } // inserting numbser into the array

    bool isNotZeroLike = true;
    while (isNotZeroLike){

        for (int isZeroCount=0; isZeroCount < 5; isZeroCount++){
            // arr[isZeroCount] != 0 ? cout<<"* " : cout << "";
            // arr[isZeroCount] != 0 ? arr[isZeroCount]-=1 : true; //reducing by one each iteration

            if (arr[isZeroCount] != 0){
                cout<<"*";
                // cout << arr[isZeroCount];
                arr[isZeroCount]-=1;
            }
            else{
                cout << " ";
            }
        }

        isNotZeroLike = false;
        for (int isZeroCount = 0; isZeroCount < 5; isZeroCount++) {
            if (arr[isZeroCount] != 0) {
                isNotZeroLike = true;
                break;
            }
        }


        cout << endl;
    }
}

