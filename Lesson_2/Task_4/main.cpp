#include <iostream>

using namespace std;

int main()
{
    const int ASCII_START = 32;
    const int ASCII_END = 126;
    const int ASCII_RANGE = ASCII_END - ASCII_START + 1;
    const int DICT_SIZE = ASCII_RANGE * 2;
    const int MAX_LINE_LENGTH = 64;

    int ImprovizedDict[DICT_SIZE] = {0};

    for (int count = ASCII_START, countNum = 0; count <= ASCII_END; count++, countNum += 2)
        ImprovizedDict[countNum] = count;

    char line[MAX_LINE_LENGTH] = "";
    cout << "Enter line (under " << MAX_LINE_LENGTH << " chars): ";
    cin.getline(line, MAX_LINE_LENGTH);

    for (int count = 0; count < MAX_LINE_LENGTH && line[count]; count++) {
        int charOffset = int(line[count]) - ASCII_START;
        int frequencyIndex = charOffset * 2 + 1;
        ImprovizedDict[frequencyIndex]++;
    }

    for (int count = 0; count < DICT_SIZE; count += 2)
        cout << char(ImprovizedDict[count]) << " ::: " << ImprovizedDict[count + 1] << endl;

    return 0;
}
