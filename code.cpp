#include <iostream>
#include "lcm.h"
#include <string>

using namespace std;

string nod(string a, string b) {
    while (b != "0") {
        string t = b;
        b = to_string(stoll(a) % stoll(b));
        a = t;
    }
    return a;
}

string nok(string m, string n) {
    return to_string(stoll(m) / stoll(nod(m, n)) * stoll(n));
}

int main() {
    string m, n;
    cout << "Введите число m: ";
    cin >> m;
    cout << "Введите число n: ";
    cin >> n;

    string r = nok(m, n);
    cout << "Наименьшее общее кратное m и n: " << r << endl;

    return 0;
}
