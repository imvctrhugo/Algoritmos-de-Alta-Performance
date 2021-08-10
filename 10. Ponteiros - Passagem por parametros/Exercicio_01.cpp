#include <iostream>
#include<locale>
using namespace std;

//& (endereco de)
//* (conteudo de)

void calcdelta(int a, int b, int c, int *d)
{
    *d = b*b-4*a*c;

}

int main() {    
    setlocale(LC_ALL,"");

    int a,b,c,delta;
    cout << "Digite três inteiros:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    calcdelta(a,b,c,&delta);

    cout << delta;

}