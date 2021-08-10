#include <iostream>
#include<locale>
using namespace std;

//& (endereco de)
//* (conteudo de)

void conftriangulo(int a, int b, int c, char *tipo)
{
    if(a == b && b == c)
        *tipo = 'E';
    else if(a==b || b==c || a==c)
        *tipo = 'I';
    else
        *tipo = 'S';

}

int main() {    
    setlocale(LC_ALL,"");

    int a, b, c;
    char result;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    conftriangulo(a,b,c, &result);

    cout << result;

}