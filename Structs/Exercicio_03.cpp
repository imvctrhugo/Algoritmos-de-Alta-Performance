#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

#define NC 30
#define maxPessoas 5

struct cadastro
{
    char nome[NC];
    char endereco[NC];
    char telefone[NC];

};
typedef struct cadastro Tipo_Cadastro;

int qtdCadastro;
int opcao_Menu;
char busca_Nome[NC];
char busca_Tel[NC];

int main() { //Funcao main
    setlocale(LC_ALL, "");

    Tipo_Cadastro agenda[maxPessoas];

    cout << "Digite a quantidade (1 a 5) de pessoas para cadastrar na agenda: ";
    do
    {        
        cin >> qtdCadastro;
        cin.ignore();

        if(qtdCadastro <= 0 || qtdCadastro > maxPessoas)
            cout << "Digite um valor válido: ";

    }while(qtdCadastro <= 0 || qtdCadastro > maxPessoas);

    for(int i = 0; i < qtdCadastro; i++)
    {
        cout << "Digite o nome: ";
        cin.getline(agenda[i].nome, NC);

        cout << "Digite o endereço: ";
        cin.getline(agenda[i].endereco, NC);

        cout << "Digite o telefone: ";
        cin.getline(agenda[i].telefone, NC);

    }  

    do
    {
        cout << "\nDigite uma opção do menu:\n";
        cout << "0. Finalizar o programa;\n1. Procurar um contato usando o telefone;\n2. Procurar um contato usando o nome.\n";
        cin >> opcao_Menu;
        cin.ignore();

        if(opcao_Menu == 1) //Busca tel
        {
            cout << "Digite o telefone para busca: ";
            cin.getline(busca_Tel, NC);
            for(int i = 0; i < qtdCadastro; i++)
            {
                if(strcmp(busca_Tel, agenda[i].telefone) == 0)
                {
                    cout << "Nome: " << agenda[i].nome << endl;
                    cout << "Endereço: " << agenda[i].endereco << endl;
                    cout << "Telefone: " << agenda[i].telefone << endl;

                }

            }

        }

        if(opcao_Menu == 2) //Busca nome
        {
            cout << "Digite o nome para busca: ";
            cin.getline(busca_Nome, NC);
            for(int i = 0; i < qtdCadastro; i++)
            {
                if(strcmpi(busca_Nome, agenda[i].nome) == 0)
                {
                    cout << "Nome: " << agenda[i].nome << endl;
                    cout << "Endereço: " << agenda[i].endereco << endl;
                    cout << "Telefone: " << agenda[i].telefone << endl;
                    
                }

            }

        }


    }while(opcao_Menu != 0);

    cout << "Obrigado por utilizar!";    

}