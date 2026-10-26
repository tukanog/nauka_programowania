#include <iostream>
using namespace std;

int nwd(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int reszta = a % b, temp = 0;
    while (reszta != 0) {
        temp = reszta;
        reszta = b % reszta;
        b = temp;
    }
    return temp;
}

int main() {
    int liczba_testow, a, b;

    cin >> liczba_testow;
    for (int i = 0; i < liczba_testow; i++) {
        cin >> a >> b;
        cout << nwd(a, b) << endl;
    }

    return 0;
}