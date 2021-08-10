#include <iostream>
#include<locale>
#include <cstring>
using namespace std;

#define caracteres 30

struct aluno
{
    char nome[caracteres];
    float nota1;
    float nota2;
    float media;
    

};
typedef struct aluno TipoAluno;

void le_registro(TipoAluno *p_aluno)
{
    cout << "Digite o nome do aluno: ";
    cin.getline(p_aluno->nome, caracteres);

    cout << "Digite a nota 1: "; cin >> p_aluno->nota1;
    cout << "Digite a nota 2: "; cin >> p_aluno->nota2;
    cin.ignore();
}

void calcula_media(TipoAluno *p_aluno)
{
    p_aluno->media = (p_aluno->nota1+p_aluno->nota2)/2;

}

void imprime(TipoAluno *p_aluno)
{
    cout << "Nome: " << p_aluno->nome << endl;
    cout << "Nota 1: " << p_aluno->nota1 << endl;
    cout << "Nota 2: " << p_aluno->nota2 << endl;
    cout << "Média: " << p_aluno->media << endl;

}

int main() {    
    setlocale(LC_ALL,"");
    
    TipoAluno aluno;
    le_registro(&aluno);
    calcula_media(&aluno);
    imprime(&aluno);

}