#include <iostream>
using namespace std;

int main() {
    int son;

    // 1. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son juft.
    cout << "1-sonni kiriting (juftlik tekshiruvi): ";
    cin >> son;
    if (son % 2 == 0) {
        cout << "Bu son juft." << endl;
    } else {
        cout << "Bu son toq." << endl;
    }

    // 2. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son toq
    cout << "2-sonni kiriting (toq tekshiruvi): ";
    cin >> son;
    if (son % 2 != 0) {
        cout << "Bu son toq." << endl;
    } else {
        cout << "Bu son juft." << endl;
    }

    // 3. Rostlikka tekshiring 1 ta natural son berilgan. Berilgan son 2 xonali
    cout << "3-sonni kiriting (2 xonali tekshiruvi): ";
    cin >> son;
    if (son >= 10 && son <= 99) {
        cout << "Bu son 2 xonali." << endl;
    } else {
        cout << "Bu son 2 xonali emas." << endl;
    }

    return 0;
}
