#include <iostream>

using namespace std;

float aptoMenorValor = 9999;
int aptoMenorAndar = 0;
int aptoMenor = 0;

float andarMaiorValor = 0;
int andarMaiorAndar = 0;

int main()
{
    float valor[5][4] = {
        {125.34, 321.56, 142.65, 67.14},
        {155.34, 221.56, 42.65, 167.14},
        {25.34, 121.56, 132.65, 63.14},
        {15.34, 121.56, 142.65, 157.14},
        {12.34, 31.56, 142.65, 17.14}

    };

    for(int i =0; i < 5; i++)
    {
        for(int j =0; j < 4; j++)
        {
            if(valor[i][j] < aptoMenorValor)
            {
                aptoMenorValor = valor[i][j];
                aptoMenorAndar = i;
                aptoMenor = j;

            }

        }

    }

    for(int i =0; i < 5; i++)
    {
        for(int j =0; j < 4; j++)
        {
            if(valor[i][j] > andarMaiorValor)
            {
                andarMaiorValor = valor[i][j];
                andarMaiorAndar = i;
                

            }

        }

    }

    cout << "Apto. com menor valor eh o  " << aptoMenorAndar+1 << aptoMenor+1 << endl;
    cout << "O andar com maior valor eh o " << andarMaiorAndar+1;

}