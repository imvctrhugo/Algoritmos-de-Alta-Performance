/*

1 - Existe a chave primária? Se sim, qual?
R: Sim, o número do 'código'.

2 - Qual método entre os 3 estudados para realizar busca pode ser usado para:
a) Pesquisar produto de um fabricante selecionado?
R: Busca sequencial exaustiva.

b) Pesquisar produto selecionando um código?
R: Busca sequencial.

3 - Poderia ser usado o método de busca binária no estado em que se encontra a tabela? Explique sua decisão.
R: Não, pois este é apenas usada para ARQUIVOS ORDENADOS.

*/

#include <iostream>
#include<locale>
#include<stdio.h>
#include<stdlib.h>
# include <ctype.h>
#include <cstring>

using namespace std;

#define TAMANHO 30
#define NC 50

struct reg
{
    char produto[NC];
    int codigo;
    char fabricante[NC];
    float preco;
    
};typedef struct reg TipoProduto;

int busca_binaria(TipoProduto vet[], int num, int chave)
{
    int i_baixo = 0, i_alto = num-1, i_medio;
    int achou = 0;
    int pos = -1;
    int cont = 0;

    while(achou != 1 && i_baixo <= i_alto)
    {
        i_medio = (i_baixo + i_alto) / 2;
        cont++;
        if(chave == vet[i_medio].codigo)
        {
            pos = i_medio;
            achou = 1;
        }
        else
        {
            if(chave < vet[i_medio].codigo)
                i_alto = i_medio - 1;
            else
                i_baixo = i_medio + 1;
        }

    }

    cout << "Foram realizadas " << cont << " comparacoes.\n";
    return(pos);

}

int busca_exaustiva(TipoProduto vet[], int num, char chave[NC], TipoProduto encontrados[])
{
    int ne = 0;

    for(int i = 0; i < num; i++)
    {
        if(strcmpi(vet[i].fabricante, chave) == 0)
        {
            encontrados[ne] = vet[i];
            ne++;

        }

    }

    return ne;    

}

int busca_sequencial(TipoProduto vet[], int num, int chave)
{
    int pos = -1, achou = 0, i;

    for(i = 0; i < num && achou == 0; i++)
    {
        if(vet[i].codigo == chave)
        {
            achou = 1;
            pos = i;
        }
    }

    cout << "Busca feita comparou " << i << " registros de arquivo.\n";

    return(pos);

}

int main()
{
    setlocale(LC_ALL, "");    
    FILE *arq;

    char aux[80], busca[NC]; //String auxiliar
    TipoProduto produto[TAMANHO], encontrados[TAMANHO];
    int n, i, ne, buscaCod;

    arq = fopen("produtos.txt", "rt");
    
    if (arq == NULL)
    {
        printf("Problemas ao abrir o arquivo.\n"); 

    }          
    else
    {
        n = 0;
        fgets(aux, 80, arq);

        while(fscanf(arq, "%s%i%s%f", &produto[n].produto, &produto[n].codigo, &produto[n].fabricante, &produto[n].preco) != EOF)
        {            
            n++;

        }
        fclose(arq);

    }

    //BUSCA EXAUSTIVA
    /*
    cout << "Digite um FABRICANTE para buscar:";
    cin.getline(busca, NC);
    ne = busca_exaustiva(produto, n, busca, encontrados);
    cout << "\nProdutos do fabricante procurado:\n";
    for(i = 0; i < ne; i++)
    {
        cout << encontrados[i].produto << "\t" << encontrados[i].codigo << "\t" << encontrados[i].preco << endl;
    }*/


    //BUSCA SEQUENCIAL
    /*
    cout << "Digite o CODIGO do produto que deseja procurar: ";
    cin >> buscaCod;
    cin.ignore();
    n = busca_sequencial(produto, n, buscaCod);
    if(n == -1)
        cout << "Registro nao eencontrado.\n";
    else
        cout << "Produto: " << produto[n].produto << endl;
        cout << "Fabricante: " << produto[n].fabricante << endl;
        cout << "Codigo: " << produto[n].codigo << endl;  
    */
        
    //BUSCA BINARIA
    cout << "Digite o CODIGO do produto que deseja procurar: ";
    cin >> buscaCod;
    cin.ignore();
    n = busca_binaria(produto, n, buscaCod);
    if(n == -1)
        cout << "Registro nao encontrado.\n";
    else
        cout << "Produto: " << produto[n].produto << endl;
        cout << "Fabricante: " << produto[n].fabricante << endl;
        cout << "Codigo: " << produto[n].codigo << endl;  

    return 0;
}