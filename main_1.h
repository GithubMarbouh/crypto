//
// Created by marbouh on 29/09/23.
//
#include <string>
#ifndef CRYPTO_MAIN_1_H
#define CRYPTO_MAIN_1_H
//#include <iostream>

//
//using namespace std;
//
string chiffrerCesar(string message, int decalage1, int decalage2) {

    string texteChiffre = "";

    for(int i = 0; i < message.length(); i++) {

        char c = message[i];

        if(isalpha(c)) {

            if(i % 2 == 0) { // Lettres paires, on utilise decalage1
                if(isupper(c))
                    texteChiffre += char(int(c - 'A' + decalage1) % 26 + 'A');
                else
                    texteChiffre += char(int(c - 'a' + decalage1) % 26 + 'a');
            }
            else { // Lettres impaires, on utilise decalage2
                if(isupper(c))
                    texteChiffre += char(int(c - 'A' + decalage2) % 26 + 'A');
                else
                    texteChiffre += char(int(c - 'a' + decalage2) % 26 + 'a');
            }

        }
        else {
            texteChiffre += c;
        }

    }

    return texteChiffre;

}

//int main() {
//
//    string message = "HelloWorld"; // Le message à chiffrer
//    int cle1 = 5, cle2 = 3; // Les deux décalages
//
//    string texteChiffre = chiffrerCesar(message, cle1, cle2);
//
//    cout << "Message chiffré : " << texteChiffre << endl;
//
//    return 0;
//
//}

#endif //CRYPTO_MAIN_1_H
