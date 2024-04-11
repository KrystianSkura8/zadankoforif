using namespace std;
#include <iostream>


int miejscowoscZamieszkania=1; int minut=0;
int main() {
    do {
        minut++;
        miejscowoscZamieszkania = miejscowoscZamieszkania * 2;

        cout << "Minelo minut:" << minut;
        cout << "liczba bakterii: " << miejscowoscZamieszkania << endl;

    } while (miejscowoscZamieszkania = 1000000000);

    return 0;

}