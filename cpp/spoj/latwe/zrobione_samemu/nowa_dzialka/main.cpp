#include <iostream>
using namespace std;

int main() {
    int ilosc_testow, bok;

    cin >> ilosc_testow;

    for (int i = 0; i < ilosc_testow; i++) {
        cin >> bok;
        cout << bok * bok << endl;
    }

    return 0;
}