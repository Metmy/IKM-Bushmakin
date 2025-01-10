#include <iostream>

using namespace std;

long long nod(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long nok(long long m, long long n) {
    return (m / nod(m, n)) * n;
}

int main() {
    long long m, n;
    cout << "Введите число m: ";
    cin >> m;
    cout << "Введите число n: ";
    cin >> n;

    long long r = nok(m, n);
    cout << "Наименьшее общее кратное m и n: " << r << endl;

    return 0;
}
