#include <iostream>

using namespace std;

int main()
{
    int vetor[10];

    for(int i = 0; i<10; i++)
    {
        cout << "Digite o indice " << i << endl;
        cin >> vetor[i];

    }

    for(int i = 0; i<10; i++)
    {
        vetor[i] += 2;

    }

    for(int i = 5; i<10; i++)
    {
        cout << vetor[i] << "\t";

    }

    return 0;
}
