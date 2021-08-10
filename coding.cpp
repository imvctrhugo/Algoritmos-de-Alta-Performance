#include <iostream>
#include<locale>
using namespace std;

//& (endereco de)
//* (conteudo de)

void exemplo(int n, int *dobro, float *metade)
{
    *dobro = n+n;
    *metade = (float)n/2;    

}

int main() {    
    setlocale(LC_ALL,"");

    int x, d;
    float m;

    cout << "Digite um número inteiro: ";
    cin >> x;

    exemplo(x, &d, &m);

    cout << "Número digitado (x): " << x << endl;
    cout << "Dobro (d): " << d << endl;
    cout << "Metade (m): " << m << endl;

}