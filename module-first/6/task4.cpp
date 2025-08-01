#include <iostream>
using namespace std;

int main() {
    int son1, son2;

    // 1. 2 ta natural son berilgan. Ikkalasi ham toq va 2 xonali.
    cout << "1-sonni kiriting: ";
    cin >> son1;
    cout << "2-sonni kiriting: ";
    cin >> son2;

    bool isBothOddTwoDigit = 
        (son1 >= 10 && son1 <= 99 && son1 % 2 != 0) &&
        (son2 >= 10 && son2 <= 99 && son2 % 2 != 0);

    cout << "Ikkalasi ham 2 xonali va toq: " << (isBothOddTwoDigit ? "rost" : "yolg'on") << endl;

    // 2. 1 ta 2 xonali natural son berilgan. Raqamlari teng.
    int son;
    cout << "\n2 xonali son kiriting: ";
    cin >> son;

    bool isTwoDigitEqualDigits = (son >= 10 && son <= 99) && ((son / 10) == (son % 10));

    cout << "Son raqamlari teng: " << (isTwoDigitEqualDigits ? "rost" : "yolg'on") << endl;

    return 0;
}
