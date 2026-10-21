#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        int tab[100];

        for (int j = 0; j < n; j++) {
            cin >> tab[j];
        }

        for (int j = n - 1; j >= 0; j--) {
            cout << tab[j] << " ";
        }

        cout << "\n";
    }

    return 0;
}

// można wpisywać (cin) liczby po kolei rozdzielając je spacjami