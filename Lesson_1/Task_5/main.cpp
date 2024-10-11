#include <iostream>

using namespace std;

//v 0.1, i want to optimize it later

int main()
{

    int rows = 0;
    cout << "Enter count of rows: "; cin >> rows;

    int starsVar = -1;

    for (int currentRow=0; currentRow<rows; currentRow++){
        for ( int spaces = rows-currentRow-1; spaces != 0; spaces--){ cout<<" "; } //printing spaces
        for ( int stars = 0; stars<starsVar+2; stars++){ cout<<"*"; }  //printing stars

        starsVar+=2;
        cout<<endl;
    }

    for (int spaceCount=0; spaceCount<rows-1; spaceCount++){ cout<<" "; } //printing stem
    cout<<"*"<<endl;
}

// reference
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
