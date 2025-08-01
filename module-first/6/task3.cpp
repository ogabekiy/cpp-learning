#include <iostream>

using namespace std;

int main() {
    int son1, son2;

    // 1. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son juft va 4 xonali
    cout << "1-sonni kiriting (juft va 4 xonali tekshiruvi): ";
    cin >> son1;
    if (son1 >= 1000 && son1 <= 9999 && son1 % 2 == 0) {
        cout << "Bu son 4 xonali va juft." << endl;
    } else {
        cout << "Bu son 4 xonali va juft emas." << endl;
    }

    // 2. Rostlikka tekshiring 2 ta natural son berilgan. 2 lasi ham toq
    cout << "2ta son kiriting (ikkalasi ham toq bo‘lishi kerak):" << endl;
    cout << "1-son: ";
    cin >> son1;
    cout << "2-son: ";
    cin >> son2;
    if (son1 % 2 != 0 && son2 % 2 != 0) {
        cout << "Ikkala son ham toq." << endl;
    } else {
        cout << "Ikkalasidan kamida biri toq emas." << endl;
    }

    // 3. Rostlikka tekshiring 2 ta natural son berilgan. 2 lasi ham juft
    cout << "Yana 2ta son kiriting (ikkalasi ham juft bo‘lishi kerak):" << endl;
    cout << "1-son: ";
    cin >> son1;
    cout << "2-son: ";
    cin >> son2;
    if (son1 % 2 == 0 && son2 % 2 == 0) {
        cout << "Ikkala son ham juft." << endl;
    } else {
        cout << "Ikkalasidan kamida biri juft emas." << endl;
    }

    return 0;
}
