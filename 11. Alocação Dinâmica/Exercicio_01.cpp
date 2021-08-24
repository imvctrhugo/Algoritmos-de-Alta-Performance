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

int main() {    
    setlocale(LC_ALL,"");
    
    float *pontFloat;

    pontFloat = (float*) malloc(sizeof(float)); //Coversão de tipo

    if(pontFloat == NULL) //Caso não consiga alocar, a função retorna o endereço 0 (NULL), que corresponde a BIOS, local onde não é acessível.
        cout << "Não foi possível alocar espaço requisitiado.\n";
    else{
        cout << "sizeof float: " << sizeof(float) << endl;
        cout << "Digite float: ";
        cin >> *pontFloat;
        cout << "Endereço = " << &pontFloat << endl;
        cout << "Dado armazenado = " << *pontFloat << endl;
        free(pontFloat);
    }

    return 0;

}