#include <iostream>

using namespace std;

//v 0.1, i want to optimize it later

int main()
{

    int rows = 0;
    cout << "Enter count of rows: ";
    cin >> rows;
    int starsVar = -1;
    for (int i=0; i<rows; i++){
        for ( int spaces = rows-i-1; spaces != 0; spaces--){ cout<<" "; } //printing spaces
        for ( int stars = 0; stars<starsVar+2; stars++){ cout<<"*"; }  //printing stars
        starsVar+=2;
        cout<<endl;
    }

    for (int i=0; i<rows-1; i++){ cout<<" "; } //printing stem
    cout<<"*"<<endl;
}

// reference
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
