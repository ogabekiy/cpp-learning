#include <iostream>
using namespace std;

int main() {
    int a = 99;
    // cin >> a;

    switch (a / 10) {
        case 1: cout << "O'n "; break;
        case 2: cout << "Yigirma "; break;
        case 3: cout << "O'ttiz "; break;
        case 4: cout << "Qirq "; break;
        case 5: cout << "Ellik "; break;
        case 6: cout << "Oltmish "; break;
        case 7: cout << "Yetmish "; break;
        case 8: cout << "Sakson "; break;
        case 9: cout << "To'qson "; break;
    }

    switch (a % 10) {
        case 0: cout << "" << endl; break;
        case 1: cout << "bir" << endl; break;
        case 2: cout << "ikki" << endl; break;
        case 3: cout << "uch" << endl; break;
        case 4: cout << "to'rt" << endl; break;
        case 5: cout << "besh" << endl; break;
        case 6: cout << "olti" << endl; break;
        case 7: cout << "yetti" << endl; break;
        case 8: cout << "sakkiz" << endl; break;
        case 9: cout << "to'qqiz" << endl; break;
    }

    return 0;
}
