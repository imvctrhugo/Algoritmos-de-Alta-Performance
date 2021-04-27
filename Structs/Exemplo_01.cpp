#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

#define NC 20

struct caderno_papelaria{
    char fabricante[NC];
    int num_folhas;
    char tipo_de_capa[NC];
    float preco;
};

typedef struct caderno_papelaria Tipo_Caderno_Papelaria;

int main() { //Funcao main
    setlocale(LC_ALL, "");

    Tipo_Caderno_Papelaria caderno_cadastro;
    Tipo_Caderno_Papelaria caderno_venda;

    cout << "- Cadastrando caderno -\n";
    
    cout << "Digite o fabricante: ";
    cin.getline(caderno_cadastro.fabricante, NC);

    cout << "Digite o número de folhas: ";
    cin >> caderno_cadastro.num_folhas;
    cin.ignore();

    cout << "Digite o tipo de capa (DURA/BROCHURA): ";
    cin.getline(caderno_cadastro.tipo_de_capa, NC);

    cout << "Digite o preço: ";
    cin >> caderno_cadastro.preco;

    caderno_venda = caderno_cadastro;

    cout << caderno_venda.fabricante << endl;
    cout << caderno_venda.num_folhas << endl;
    cout << caderno_venda.tipo_de_capa << endl;
    cout << caderno_venda.preco << endl;

    
}