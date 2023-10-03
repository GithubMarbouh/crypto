#include <iostream>
#include <string>
#include "main_1.h"

using namespace std;

string dechiffrerCesar(string message, int decalage1, int decalage2) {

    string texteClair = "";

    for(int i=0; i<message.length(); i++) {

        char c = message[i];

        if(isalpha(c)) {

            if(i%2==0) { // Lettres paires, on utilise decalage1
                if(isupper(c))
                    texteClair += char(int(c - 'A' + 26 - decalage1) % 26 + 'A');
                else
                    texteClair += char(int(c - 'a' + 26 - decalage1) % 26 + 'a');
            }
            else { // Lettres impaires, on utilise decalage2
                if(isupper(c))
                    texteClair += char(int(c - 'A' + 26 - decalage2) % 26 + 'A');
                else
                    texteClair += char(int(c - 'a' + 26 - decalage2) % 26 + 'a');
            }

        }
        else {
            texteClair += c;
        }

    }

    return texteClair;

}

int main() {

    string message = "ntjmpumgzpgtstggpgt:zpnchumtputgfsftgthmganchumoz\n"
                     "ootrtunhpyctgktjqtjchfooxuj qhgztumxpotjxotfoqtohr\n"
                     "xunhzutwftgtopfnt jmpua trfnshodpfrxpjjtqtghtbxuj";
    int cle1 = 11, cle2 = 25;

    string texteClair = dechiffrerCesar(message, cle1, cle2);

    cout << "Message déchiffré : " << texteClair << endl;

    return 0;

}