#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

#define NC 30

float delta(float a, float b, float c)
{
    return(b*b-4*a*c);

}

int main()
{
    setlocale(LC_ALL, "");
    
    float a,b,c;

    cout << "Digite tres numeros: ";

    cin >> a >> b >> c;

    cout << delta(a,b,c);

    return 0;

}