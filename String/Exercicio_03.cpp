#include <iostream>
#include <cstring>

using namespace std;

#define alunosMaximo 200
#define caracteres 30

int main()
{
    int alunosPresentes = 0, opcaoDesejada, presente;
    char nome[alunosMaximo][caracteres];   

    do
    {
        cout << "Escolha uma opcao: " << endl;
        cout << "0. Encerrar o programa;" << endl;
        cout << "1. Adicionar um aluno;" << endl;
        cout << "2. Procurar por um aluno;" << endl;
        cout << "Opcao: ";
        cin >> opcaoDesejada;

        if(opcaoDesejada == 1)
        {
            if(strcmp(nome[alunosMaximo-1], "") == 0)
            {
                cout << "Digite um nome para presenca: ";
                cin.ignore();
                cin.getline(nome[alunosPresentes], caracteres);
                cout << nome[alunosPresentes] << " cadastrado!" << endl;

                alunosPresentes++;

            }

        }

        else if(opcaoDesejada == 2)
        {
            char pesquisa[caracteres];
            presente = 0;
            cout << "Digite um nome para busca: ";
            cin.ignore();
            cin.getline(pesquisa,caracteres);

            for(int a = 0; a < alunosMaximo; a++)
            {
                if(strcmp(pesquisa, nome[a]) == 0)
                    presente = 1;

            }

            if(presente == 1)
                cout << "Aluno " << pesquisa << " esta presente. \n";
            else
                cout << "Aluno " << pesquisa << " NAO esta presente. \n";

        }

        else if(opcaoDesejada != 0)
            cout << "Opcao invalida!";

    }while(opcaoDesejada != 0);

    cout << "Obrigado por utilizar.";
    
}
