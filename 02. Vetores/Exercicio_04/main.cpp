#include <iostream>

using namespace std;

int main()
{
    //Criacao de vetores para armazenamento de dados.
    string rm[40] = {"0001", "0002", "0003", "0004", "0005", "0006", "0007", "0008", "0009", "0010"};
    string aprovados[40];
    float prova1[40] = {8.45, 6.21, 7.21, 1.52, 1.97, 6.37, 8.12, 6.98, 8.52, 4.69};
    float prova2[40] = {3.65, 7.48, 3.12, 7.96, 10, 6.41, 6.37, 9.34, 7.14, 2.32};
    float media[40];

    //Percorre a lista dos RM's calculando suas respectivas medias.
    for(int i = 0; i < 40; i++)
    {
        if(rm[i] != "")
        {
            media[i] = (prova1[i] + prova2[i])/2;

        }

    }

    //Percore o vetor das medias e define os aprovados de acordo com o criterio de media ( >= 6)
    for(int n = 0; n < 40; n++)
    {
        if(media[n] >= 6.0 && media[n] <= 10)
        {
            for(int x = 0; x < 40; x++)
            {
                if(aprovados[x] =="")
                {
                    aprovados[x] = rm[n];
                    break;

                }

            }

        }

    }

    //Imprime o vetor dos aprovados;
    cout << "Aprovados: " << endl;
    for(int v = 0; v < 40; v++)
    {
        if(aprovados[v] != "")
        {
            cout << "RM " << aprovados[v] << endl;

        }

    }
    return 0;
}
