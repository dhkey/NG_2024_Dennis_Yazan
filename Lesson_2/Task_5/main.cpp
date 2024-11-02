#include <iostream>

using namespace std;

int main()
{
    char line[64];
    cout << "Enter the line to count its words: ";
    cin.getline(line, 64);

    bool isCharState = false;
    int words = 0;
    int count = 0;
    while (line[count]) {
        if (int('a') >= line[count] && line[count] <= int('z')) {
            if (!isCharState) {
                words++;
                isCharState = true; }
        } else
            isCharState = false;

        count++;
    }

    cout<<words<<endl;
}
