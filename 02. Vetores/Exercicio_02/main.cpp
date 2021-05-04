#include <iostream>

using namespace std;

int main()
{
    float saldos[10] = {10.21, -395.36, 403.95, -440.45, 459.78, -346.54, 27.69, -53.41, 417.58, -354.41};
    int n = 0;

    for(int i = 0; i < 10; i++)
    {
        if(saldos[i] >= 0)
        {
            cout << "R$" << saldos[i] << endl;
            n++;
        }

    }

    cout << "\n" << "Pessoas endividadas: " << n << endl;

    return 0;
}
