#include <iostream>
#include <cstring>

using namespace std;

#define caracteres 30


int main()
{
    char str1[caracteres], str2[caracteres];

    strcpy(str1, "linguagem");
    strcpy(str2, " C");
    strcat(str1, str2);

    cout << str1 << " possui " << strlen(str1) << " caracteres.";

}