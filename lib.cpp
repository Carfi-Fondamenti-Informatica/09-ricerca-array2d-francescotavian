using namespace std;
#include <iostream>
#include "lib.h"
int z =0;
void compila (char nomi[10][20]){
    for (int i= 0; i < 10; i++) {
        for (int k = 0; k < 20; k++) {
            nomi[i][k] = ' ';
        }
    }
    for (int i= 0; i < 10; i++) {
        cin>>nomi[i];
    }
}
void compila2(char nomi[]){
    for (int k = 0; k < 20; k++) {
        nomi[k]=' ';
    }
        cin>>nomi;

    }
bool confronto(char nomi[][20], char nomi2[]){
    for (z=0;z<10;z++){

        for (int k = 0; k < 20; k++) {
            if (nomi[z][k] != nomi2[k])
            {
                break;
            }
            else if (k==19)
            {
                return true;
            }
        }
    } return false;
}
void finale(char nomi[10][20], char nomi2[20]){
    if (confronto(nomi, nomi2))
    {
        cout << z;
    }
    else
    {
        cout << "non presente";
    }
}
