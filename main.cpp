#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char lista[10][20];
    char nome[10];
    compila(lista);
    compila2(nome);
    confronto(lista,nome);
    finale(lista,nome);
    return 0;
}
