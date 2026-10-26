#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operacja;

    while (cin >> operacja >> a >> b) {
        if (operacja == '+') {
            cout << a + b << endl;
        } else if (operacja == '-') {
            cout << a - b << endl;
        } else if (operacja == '*') {
            cout << a * b << endl;
        } else if (operacja == '/') {
            cout << a / b << endl;
        } else if (operacja == '%') {
            cout << a % b << endl;
        }
    }

    return 0;
}