#include <iostream>
#include <string>

using namespace std;

string decrypt(string encryptedText, int move){
    string decryptedText = "";

    for (int letter = 0; letter < encryptedText.length(); letter++){
        if ('a' <= encryptedText[letter] && encryptedText[letter] <= 'z') {
            int element = int(encryptedText[letter] - 'a') - move;
            decryptedText += char((element >= 0 ? element : element + 26) + 'a');
        }
        else if ('A' <= encryptedText[letter] && encryptedText[letter] <= 'Z') {
            int element = int(encryptedText[letter] - 'A') - move;
            decryptedText += char((element >= 0 ? element : element + 26) + 'A');
        }
        else
            decryptedText += encryptedText[letter];
    }

    return decryptedText;
}

int main() {
    string encryptedText = "Spwwz, declyrpc. Dppxd wtvp jzf yze ufde l dnctae vtootp, dz zfc lrpynj slgp dzxp uzm qzc jzf. Tq jzf hlye ez lnnpae esp “uzm” zqqpc - ufde afds ez jzfc cpaz esp nzop, esle sld opncjaepo estd xpddlrp, lyo ylxp te nlccze.naa. Hp lcp hltetyr…";

    for(int move = 1; move <= 26; move ++){
        cout << decrypt(encryptedText, move) << endl << endl;
    } // brutforcing all possible options

    // decreapted message, move - 11

    // Hello, stranger. Seems like you not just a script kiddie, so our agency have some job for you.
    // If you want to accept the “job” offer - just push to your repo the code, that has decrypted this message,
    // and name it carrot.cpp. We are waiting…


    return 0;
}
