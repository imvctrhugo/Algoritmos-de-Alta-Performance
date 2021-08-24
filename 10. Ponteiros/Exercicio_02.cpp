#include <iostream>
#include<locale>
using namespace std;

//& (endereco de)
//* (conteudo de)

char conftriangulo(int a, int b, int c)
{
    if(a == b && b == c)
        return 'E';
    else if(a==b || b==c || a==c)
        return 'I';
    else
        return 'S';

}

int main() {    
    setlocale(LC_ALL,"");

    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    char resultado = conftriangulo(a,b,c);

    cout << resultado;

}