#include <iostream>

using namespace std;

int main() {
    int son;

    // 1. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son 4 xonali
    cout << "1-sonni kiriting (4 xonali tekshiruvi): ";
    cin >> son;
    if (son >= 1000 && son <= 9999) {
        cout << "Bu son 4 xonali." << endl;
    } else {
        cout << "Bu son 4 xonali emas." << endl;
    }

    // 2. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son juft va 2 xonali
    cout << "2-sonni kiriting (juft va 2 xonali tekshiruvi): ";
    cin >> son;
    if (son >= 10 && son <= 99 && son % 2 == 0) {
        cout << "Bu son 2 xonali va juft." << endl;
    } else {
        cout << "Bu son 2 xonali va juft emas." << endl;
    }

    // 3. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son toq va 3 xonali
    cout << "3-sonni kiriting (toq va 3 xonali tekshiruvi): ";
    cin >> son;
    if (son >= 100 && son <= 999 && son % 2 != 0) {
        cout << "Bu son 3 xonali va toq." << endl;
    } else {
        cout << "Bu son 3 xonali va toq emas." << endl;
    }

    return 0;
}
