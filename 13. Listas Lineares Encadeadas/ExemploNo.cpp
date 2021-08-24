#include <iostream>
#include <locale>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct no{
    int dado;
    struct no *prox;

};typedef struct no *TipoLista;

int main() {    
    setlocale(LC_ALL,"");

    TipoLista lista, novo;

    lista = (TipoLista) malloc(sizeof(struct no));
    if(lista == NULL)
        cout << "Não foi possível alocar espaço requisitado.";
    else{
        cout << "Digite o valor do elemento inteiro: ";
        cin >> lista->dado;
        lista->prox = NULL;
    }

    novo = (TipoLista) malloc(sizeof(struct no));
    if(novo == NULL)
        cout << "Não foi possível alocar espaço requisitado\n";
    else{
        cout << "Digite o valor do elemento inteiro: ";
        cin >> novo->dado;
        novo->prox = lista;
        lista = novo;
    }

    free(lista);
    free(novo);

    return 0;

}