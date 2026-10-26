#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int liczba_testow, liczba_obzartuchow, liczba_ciastek_w_pudelku, czas_jedzenia_ciastka;

    cin >> liczba_testow;

    for (int i = 0; i < liczba_testow; i++) {
        cin >> liczba_obzartuchow >> liczba_ciastek_w_pudelku;

        int laczna_liczba_ciastek = 0;

        for (int j = 0; j < liczba_obzartuchow; j++) {
            cin >> czas_jedzenia_ciastka;
            laczna_liczba_ciastek += 86400 / czas_jedzenia_ciastka;
        }

        cout << ceil((double)laczna_liczba_ciastek / liczba_ciastek_w_pudelku) << endl;
    }

    return 0;
}
// pomocy