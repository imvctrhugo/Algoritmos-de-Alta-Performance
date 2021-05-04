#include <iostream>

using namespace std;

int main()
{
    int vetor[10];
    int maior, indiceMaior;

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o numero para o indice " << i << "\t";
        cin >> vetor[i];
        cout << endl;

    }

    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
            indiceMaior = i;

        }

    }

    cout << "\nMaior valor: " << maior;
    cout << "\nIndice do maior valor: " << indiceMaior;

    return 0;
}
