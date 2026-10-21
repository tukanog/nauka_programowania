
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tekst;
    int liczbaa = 0, liczbae = 0, liczbai = 0, liczbao = 0, liczbau = 0, liczbay = 0;

    cout << "Podaj tekst: ";
    getline(cin, tekst);

    for (int i = 0; i < tekst.size(); i++) {
        for (int j = 0; j < samogloski.size(); j++) {
        if (tekst[i] == samogloski[j]) {
            licznik[j]++;
        }
    }
}

    cout << "a: " << liczbaa << '\n';
    cout << "e: " << liczbae << '\n';
    cout << "i: " << liczbai << '\n';
    cout << "o: " << liczbao << '\n';
    cout << "u: " << liczbau << '\n';
    cout << "y: " << liczbay << '\n';

    cout << "Razem: " << liczbaa + liczbae + liczbai + liczbao + liczbau + liczbay;

    return 0;
}
