#include <iostream>
using namespace std;

int main() {
    int liczba_testow, a, b;

    cin >> liczba_testow;

    for (int i = 0; i < liczba_testow; i++) {
        cin >> a >> b;

        a = a % 10;
        b = (b - 1) % 4 + 1;

        int wynik = 1;

        for (int j = 0; j < b; j++) {
            wynik = (wynik * a) % 10;
        }

        cout << wynik << endl;
    }

    return 0;
}
// https://chatgpt.com/s/t_6adf69188b7c819191608a891b628cb7