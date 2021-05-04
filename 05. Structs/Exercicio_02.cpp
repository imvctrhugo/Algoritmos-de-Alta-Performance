#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

#define NC 30
#define maxClientes 2000

struct dados_cliente{
    char nome[NC];
    char endereco[NC];
    char cpf[NC];
    int id_conta;
    int ano_abertura;
    float saldo;

};

int qtdCadastro;
int negativos;
int antigos;
char buscaCPF[NC];


typedef struct dados_cliente Tipo_Cliente;

int main() { //Funcao main
    setlocale(LC_ALL, "");

    Tipo_Cliente clientes[maxClientes];

    cout << "Digite a quantidade de clientes a serem informatizados: ";

    do{        
        cin >> qtdCadastro;
        cin.ignore();

        if(qtdCadastro <= 0 || qtdCadastro > maxClientes)
            cout << "Digite um valor válido: ";

    }while(qtdCadastro <= 0 || qtdCadastro > maxClientes);

    strcpy(clientes[0].nome, "Victor Hugo");

    for(int i = 0; i < qtdCadastro; i++)
    {
        cout << "\nInformatizando o cliente número " << i << endl;

        cout << "Digite o NOME: ";
        cin.getline(clientes[i].nome, NC);

        cout << "Digite o ENDEREÇO: ";
        cin.getline(clientes[i].endereco, NC);

        cout << "Digite o CPF: ";
        cin.getline(clientes[i].cpf, NC);

        cout << "Digite o NÚMERO DA CONTA: ";
        cin >> clientes[i].id_conta;
        cin.ignore();

        cout << "Digite o ANO DE ABERTURA: ";
        cin >> clientes[i].ano_abertura;
        cin.ignore();
        if(clientes[i].ano_abertura <= 2021-10)
            antigos++;

        cout << "Digite o SALDO: R$";
        cin >> clientes[i].saldo;
        cin.ignore();
        if(clientes[i].saldo < 0)
            negativos++;

    }

    cout << "\nHá " << antigos << " cliente(s) que abriram sua conta há mais de 10 anos." << endl;
    cout << "\nHá " << negativos << " cliente(s) que estão com saldo negativo." << endl;

    if(negativos > 0)
    {
        cout << "Entre eles:\n";
        for(int n = 0; n < qtdCadastro; n++)
        {
            if(clientes[n].saldo < 0)
            {
                cout << "Conta número " << clientes[n].id_conta << " | ";

            }            
        }
    }
    

    while(true)
    {
        cout << "\nDigite um CPF para busca: ";
        cin.getline(buscaCPF, NC);

        for(int i = 0; i < qtdCadastro; i++)
        {
            if(strcmp(buscaCPF, clientes[i].cpf) == 0)
            {
                cout << "Nome: " << clientes[i].nome << endl;
                cout << "Endereço: " << clientes[i].endereco << endl;
                cout << "CPF: " << clientes[i].cpf << endl;
                cout << "Número da conta: " << clientes[i].id_conta << endl;
                cout << "Ano de abertura: " << clientes[i].ano_abertura << endl;
                cout << "Saldo: " << clientes[i].saldo << endl;

            }

        }

    }

}