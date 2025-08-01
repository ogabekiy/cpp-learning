// fayl nomi: divide_by_4.cpp

#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "Sonni kiriting: ";
    cin >> son;

    // Bitwise usulda 4 ga bo'lish: >> 2
    int natija = son >> 2;

    cout << "Bitwise orqali 4 ga bo'lingan natija: " << natija << endl;

    return 0;
}
