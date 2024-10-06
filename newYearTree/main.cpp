#include <string>
#include <iostream>


using namespace std;


int main()
{
    int rows = 6;
    int starsVar = -1;
    for (int i=0; i<rows; i++){
        for ( int spaces = rows-i-1; spaces != 0; spaces--){ cout<<" "; }
        for ( int stars = 0; stars<starsVar+2; stars++){ cout<<"*"; }
        starsVar+=2;
        cout<<endl;
    }
}
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
