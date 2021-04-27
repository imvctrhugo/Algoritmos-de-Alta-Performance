#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

#define NC 30

struct dados_cliente{
    char nome[NC], endereco[NC], cpf[NC];
    int id_conta, ano_abertura;
    float saldo;
};

typedef struct dados_cliente Cliente;

int main() { //Funcao main
    setlocale(LC_ALL, "");

    Cliente Jose;

    cout << "- Cadastrando um cliente -\n";

    cout << "Digite o NOME: ";
    cin.getline(Jose.nome, NC);

    cout << "Digite o ENDEREÇO: ";
    cin.getline(Jose.endereco, NC);

    cout << "Digite o CPF: ";
    cin.getline(Jose.cpf, NC);

    cout << "Digite o NÚMERO DA CONTA: ";
    cin >> Jose.id_conta;
    cin.ignore();

    cout << "Digite o ANO DE ABERTURA: ";
    cin >> Jose.ano_abertura;
    cin.ignore();

    cout << "Digite o SALDO: R$";
    cin >> Jose.saldo;
    cin.ignore();

    cout << "Nome: " << Jose.nome << endl;
    cout << "Endereço: " << Jose.endereco << endl;
    cout << "CPF: " << Jose.cpf << endl;
    cout << "Número da conta: " << Jose.id_conta << endl;
    cout << "Ano de abertura: " << Jose.ano_abertura << endl;
    cout << "Saldo: " << Jose.saldo << endl;

    cout << "FIM!";
    

}