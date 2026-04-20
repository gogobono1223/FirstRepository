#include <iostream>
using namespace std;

int main() {
    string op, a, b;
    cout << "Operacja (AND OR NOT XOR): ";
    cin >> op;

    if (op == "NOT") {
        cout << "Podaj liczbe: ";
        cin >> a;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '0') cout << '1';
            else if (a[i] == '1') cout << '0';
        }
    } else {
        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        for (int i = 0; i < a.length(); i++) {
            int x = a[i] - '0';
            int y = b[i] - '0';

            if (op == "AND") cout << (x & y);
            else if (op == "OR") cout << (x | y);
            else if (op == "XOR") cout << (x ^ y);
        }
    }

    return 0;
}
