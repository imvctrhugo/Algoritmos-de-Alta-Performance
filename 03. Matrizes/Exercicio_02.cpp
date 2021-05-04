#include <iostream>

using namespace std;

float somaLinha4;
float somaColuna2;
float somaTotal;
float somaColunaPrincipal;

int main()
{
    float m[4][2] = 
    {
        {742.3, 324.5},
        {963.74, 254.31},
        {423.45, 145.36},
        {154.37, 197.94}

    };

    for(int i = 0; i < 2; i++)
    {
        somaLinha4 += m[4-1][i];

    }

    for(int j = 0; j < 4; j++)
    {
        somaColuna2 += m[j][2-1];


    }

    for(int k = 0; k < 4; k++)
    {
        for(int l = 0; l < 2; l++)
        {
            somaTotal += m[k][l];

        }
    }   

    for(int j = 0; j < 4; j++)
    {
        somaColunaPrincipal += m[j][1-1];
    }

    cout << "Soma linha 4: " << somaLinha4 << endl;
    cout << "Soma coluna 2: " << somaColuna2 << endl;
    cout << "Soma total: " << somaTotal << endl;  
    cout << "Soma coluna principal: " << somaColunaPrincipal << endl;


}