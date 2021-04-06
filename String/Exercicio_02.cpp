#include <iostream>
#include <cstring>

using namespace std;

#define maximoAlunos 50
#define maximoCaracteres 20

int main()
{
    float nota[50];
    int indiceMaior;
    int qtdAlunos;
    char nome[maximoAlunos][maximoCaracteres];
    char nomeDigitado[maximoCaracteres];

    do
    {
        cout << "Digite a quantidade de alunos na sala (< 50): ";
        cin >> qtdAlunos;

    }while(qtdAlunos > maximoAlunos);

    for(int i = 0; i < qtdAlunos; i++)
    {
        cout << "Digite o NOME do aluno " << i+1 << ": ";
        cin.ignore();
        cin.getline(nome[i], maximoCaracteres);

        cout << "Digite a NOTA do aluno " << i+1 << ": ";
        cin >> nota[i];

    }

    for(int n = 1; n < qtdAlunos; n++)
    {
        if(nota[n] > nota[n-1])
        {
            indiceMaior = n;

        }



    }

    cout << "Aluno com maior nota: " <<  nome[indiceMaior] << " | Nota: " << nota[indiceMaior];


}