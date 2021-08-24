#include <iostream>
#include <locale>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main() {    
    setlocale(LC_ALL,"");

    float *p1, *p2, *p3;
    float media_final;

    p1 = (float*) malloc(sizeof(float));
    cout << "Endereço de p1: " << p1 << endl;
    cout << "Digite 1a nota: ";
    cin >> *p1;

    p2 = (float*) malloc(sizeof(float));
    cout << "Endereço de p2: " << p2 << endl;
    cout << "Digite 2a nota: ";
    cin >> *p2;

    p3 = (float*) malloc(sizeof(float));
    cout << "Endereço de p3: " << p3 << endl;
    cout << "Digite 3a nota: ";
    cin >> *p3;

    media_final = (*p1 + *p2 + *p3)/3;

    cout << "Média final: " << media_final;

    free(p1);
    free(p2);
    free(p3);

    return 0;

}