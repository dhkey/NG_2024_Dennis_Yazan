#include <iostream>

using namespace std;

//Dont work for the cyrylic, appears that it looks like 2 chars for compiler. Do we need to take care of it?

int main()
{
    char line[64] = ""; cout << "Enter line(under 64 chars): "; cin.getline(line, 64); //initialization + filling

    int count = 0;
    while ( line[count]) count++; //counting chars

    cout<<count<<endl;

}
