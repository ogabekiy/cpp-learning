#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // 1. Eng kattasi a
    cout << "1. a, b, c sonlarini kiriting:\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    bool aIsMax = (a > b) && (a > c);
    cout << "Eng kattasi a: " << (aIsMax ? "rost" : "yolg'on") << endl;

    // 2. Eng kattasi c
    bool cIsMax = (c > a) && (c > b);
    cout << "Eng kattasi c: " << (cIsMax ? "rost" : "yolg'on") << endl;

    return 0;
}
