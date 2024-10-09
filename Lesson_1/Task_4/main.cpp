#include <iostream>

using namespace std;

int main()
{
    int sallary = 0;
    cout << "Enter your sallary: "; cin >> sallary;

    if  (sallary < 1000){
        cout << "You must to work harder!" << endl;
    }
    else if (( sallary > 999) * (sallary < 999999)) { // alternative to AND operator, like if some of conditions is false, 1*0 = 0, smth like that
        cout << "Great job!" << endl;
    }
    else if (sallary > 1000000) {
        cout << "You are the millionaire! Congrats!" << endl;
    }
}
