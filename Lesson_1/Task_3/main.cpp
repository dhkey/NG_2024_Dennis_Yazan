#include <iostream>

using namespace std;

int main()
{
    cout << "One-Action calculator:" << endl;
    cout << "Choose an action:\n1: +(plus)\n2: -(minus)\n3: *(multiply)\n4: /(divide)" << endl;
    char action = '0'; cin >> action;

    double firstNumber = 0; double secondNumber = 0;
    cout << "Enter first number: " << endl; cin >> firstNumber;
    cout << "Enter second number: " << endl; cin >> secondNumber;

    switch(action){
    case '1': // plus // if our size for our char action variable is exiting its memory limits(like user can input 999 as an action) - the value == 1, otherwise it ll be ignored
        cout << "Result: " << firstNumber + secondNumber << endl;;
        break;
    case '2': // minus
        cout << "Result: " << firstNumber - secondNumber << endl;;
        break;
    case '3': // multiply
        cout << "Result: " << firstNumber * secondNumber << endl;;
        break;
    case '4': // divide
        cout << "Result: " << firstNumber / secondNumber << endl;;
        break;
    }

}
