#include <iostream>
#include<locale>
#include <cstring>
using namespace std;

// & ENDEREÇO DE
// * CONTEUDO DE

#define caracteres 30

struct aluno
{
    char nome[caracteres];
    float nota1;
    float nota2;
    float media;
};
typedef struct aluno TipoAluno;

void registroNota(TipoAluno *aluno) {
    cout << "Digite o nome do aluno:";
    cin.getline(aluno->nome, caracteres);

    cout << "Digite a NOTA 1: ";
    cin >> aluno->nota1;

    cout << "Digite a NOTA 2: ";
    cin >> aluno->nota2;
    cin.ignore();
}

void calculaMedia(TipoAluno *aluno) {
    aluno->media = (aluno->nota1+aluno->nota2)/2;

}

void apresentaAluno(TipoAluno *aluno) {
    cout << "Nome: " << aluno->nome << endl;
    cout << "Nota 1: " << aluno->nota1 << endl;
    cout << "Nota 2: " << aluno->nota2 << endl;
    cout << "Média: " << aluno->media << endl;

}

int main() {    
    setlocale(LC_ALL,"");

    TipoAluno Aluninho;
    registroNota(&Aluninho);
    calculaMedia(&Aluninho);
    apresentaAluno(&Aluninho);

}