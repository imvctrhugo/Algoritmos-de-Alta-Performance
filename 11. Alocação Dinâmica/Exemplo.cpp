#include <iostream>
#include <locale>
#include <cstring>
#include <stdlib.h>
using namespace std;

/*
#include <stdlib.h> - Lib. necessária para os comandos

*pontChar - Conteúdo de
&pontChar - Endereço de

sizeof() - Retorna o tamanho de um tipo de dado (em byte)
malloc() - Retorna um ponteiro genérico (memoryallocation)
free() - Libera o espaço alocado
*/

int main() {    
    setlocale(LC_ALL,"");
    
    char *pontChar;

    pontChar = (char*) malloc(sizeof(char)); //Coversão de tipo

    if(pontChar == NULL) //Caso não consiga alocar, a função retorna o endereço 0 (NULL), que corresponde a BIOS, local onde não é acessível.
        cout << "Não foi possível alocar espaço requisitiado.\n";
    else{
        cout << "sizeof char: " << sizeof(char) << endl;
        cout << "Digite caracter: ";
        cin >> *pontChar;
        cout << "Endereço = " << &pontChar << endl;
        cout << "Dado armazenado = " << *pontChar << endl;
        free(pontChar);
    }

    return 0;

}