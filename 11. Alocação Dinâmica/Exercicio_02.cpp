#include <iostream>
#include <locale>
#include <cstring>
#include <stdlib.h>
using namespace std;

/*
#include <stdlib.h> - Lib. necessária para os comandos

*pontFloat - Conteúdo de
&pontFloat - Endereço de

sizeof() - Retorna o tamanho de um tipo de dado (em byte)
malloc() - Retorna um ponteiro genérico (memoryallocation)
free() - Libera o espaço alocado
*/

struct livro
{
    char titulo[50];
    char autor[30];
    float preco;
}; typedef struct livro TipoLivro;


int main() {    
    setlocale(LC_ALL,"");

    TipoLivro *pont;

    pont = (TipoLivro*) malloc(sizeof(TipoLivro)); //Coversão de tipo

    if(pont == NULL) //Caso não consiga alocar, a função retorna o endereço 0 (NULL), que corresponde a BIOS, local onde não é acessível.
        cout << "Não foi possível alocar espaço requisitiado.\n";
    else{
        cout << "sizeof TipoLivro: " << sizeof(TipoLivro) << endl;

        cout << "\nDigite o TÍTULO do livro: ";
        cin.getline(pont->titulo, 50);
        cout << "Digite o AUTOR do livro: ";
        cin.getline(pont->autor, 30);
        cout << "Digite o PREÇO do livro: ";
        cin >> pont->preco;

        cout << pont->titulo << "\t" << pont->autor << "\tR$" << pont->preco;
        
        free(pont);

    }

    return 0;

}