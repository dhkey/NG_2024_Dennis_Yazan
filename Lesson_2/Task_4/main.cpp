#include <iostream>


using namespace std;

int main()
{

    int ImprovizedDict[189] = {0};
    for (int count = 32, countNum = 0; count <= 126 ; count++, countNum+=2)
        ImprovizedDict[countNum] = count;

    char line[64] = "";
    cout << "Enter line(under 64 chars): ";
    cin.getline(line, 64);

    for (int count = 0; count < 64 && line[count]; count ++)
        ImprovizedDict[((int(line[count])-32)*2)+1]++;

    for (int i=0; i<188; i+=2)
        cout << char(ImprovizedDict[i]) << " ::: " << ImprovizedDict[i+1] << endl;

}
