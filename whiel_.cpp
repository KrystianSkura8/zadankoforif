#include <iostream>
using namespace std;

int miejscowoscZamieszkania=1; int minut=0;

int main()
{
    while(minut + 4)
    {
        minut++;
        miejscowoscZamieszkania=miejscowoscZamieszkania *2;

        cout << "minelo minut:" <<minut << endl;
    }

    return 0;
}