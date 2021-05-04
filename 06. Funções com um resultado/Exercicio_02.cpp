#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

#define alunos 4



float calculoMedia(float nota1, float nota2)
{
    return((0.4 * nota1) + (0.6 * nota2));

}

char conceito(float media)
{
    if(media >= 8.5)
        return 'e';

    else if(media >= 5)
        return 'b';

    else
        return 'r';

}

int main()
{

    float nota1[alunos], nota2[alunos], medias[alunos];

    for(int a = 0; a < alunos; a++) //for percorre alunos
    {
        cout << "Digite a primeira nota do aluno " << a << " : ";
        cin >> nota1[a];

        cout << "Digite a segunda nota do aluno " << a << " : ";
        cin >> nota2[a];

        medias[a] = calculoMedia(nota1[a], nota2[a]);

    }

    cout << "Media do aluno 0: " << medias[0] << conceito (medias[0])<<  endl;
    cout << "Media do aluno 1: " << medias[1] << conceito (medias[1]) << endl;
    cout << "Media do aluno 2: " << medias[2] << conceito (medias[2]) << endl;
    cout << "Media do aluno 3: " << medias[3] << conceito (medias[3]) << endl;

}