#include <iostream>

using namespace std;

bool isLetter(char symbol){
    for (char element = 'a'; element < 'z' + 1; element++){
        if (int(symbol) == int(element)) return 1;
    }
    return 0;
}


int main()
{
    char line[64] = "234Hello&*&#world#$%a";
    bool isCharState = false;
    int words = 0;
    int count = 0;
    while (line[count]) {
        if (isLetter(line[count])) {
            if (!isCharState) { words++; isCharState = true; } //increasing words && entering the 'island' state
        } else isCharState = false;

        count++;
    }

    cout<<words<<endl;
}
