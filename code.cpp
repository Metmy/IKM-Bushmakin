#include <iostream>
#include <string>

using namespace std;

bool durak(const string& str) {
    for (char const &c : str) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

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
    if (!durak(m)) {
        cout << "Ошибка" << endl;
        return 1;
    }

    cout << "Введите число n: ";
    cin >> n;
    if (!durak(n)) {
        cout << "Ошибка" << endl;
        return 1;
    }

    string r = nok(m, n);
    cout << "Наименьшее общее кратное m и n: " << r << endl;

    return 0;
}
