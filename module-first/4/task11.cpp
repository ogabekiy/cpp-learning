
#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "Sonni kiriting: ";
    cin >> son;

    // Bitwise usulda 8 ga ko'paytirish: << 3
    int natija = son << 3;

    cout << "Bitwise orqali 8 ga ko'paytirilgan natija: " << natija << endl;

    return 0;
}