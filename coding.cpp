#include <iostream>
#include <cstring>

using namespace std;

#define maximoAlunos 200
#define caracteres 25

int presentes;
char nome[maximoAlunos][caracteres];

int main()
{    
    do
    {
        cout << "Digite quantos alunos estao presentes: ";
        cin >> presentes;

        if(presentes < 0 || presentes > maximoAlunos)
            cout << "Por favor digite um valor valido entre 0 e 200." << endl;

    }while(presentes < 0 || presentes > maximoAlunos);

    for(int i = 0; i < presentes; i++)
    {
        cout << "Digite o nome do aluno " << i << ": ";
        cin.ignore();
        cin.getline(nome[i], caracteres);

    }

    for(int i = 0; i < presentes; i++)
        cout << nome[i] << endl;

    

}