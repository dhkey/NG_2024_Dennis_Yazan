#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    for (int count = 0; count < 5; count ++) { cin >> arr[count]; } // inserting numbser into the array
    for (int count = 0; count < 5; count ++) {
        count != 4 ? cout << arr[count] << ", " : cout << arr[count] << endl; // outputing using ternar operator, like if cout not equals to 4 - display without ','
    }
}
