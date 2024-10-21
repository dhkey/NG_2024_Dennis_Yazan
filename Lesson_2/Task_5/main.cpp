#include <iostream>

using namespace std;

int main()
{
    char line[64] = "234Hello&*&#world#$%a";
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
