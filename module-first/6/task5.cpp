#include <iostream>
using namespace std;

int main() {
    int son;

    // 1. Sonning raqamlari yig‘indisi 10 dan katta
    cout << "1. 2 xonali son kiriting: ";
    cin >> son;
    bool isSumGreaterThan10 = (son >= 10 && son <= 99) && ((son / 10 + son % 10) > 10);
    cout << "Raqamlar yig'indisi 10 dan katta: " << (isSumGreaterThan10 ? "rost" : "yolg'on") << endl;

    // 2. Sonning raqamlari ko‘paytmasi 20 dan katta
    cout << "\n2. 2 xonali son kiriting: ";
    cin >> son;
    bool isProductGreaterThan20 = (son >= 10 && son <= 99) && ((son / 10) * (son % 10) > 20);
    cout << "Raqamlar ko'paytmasi 20 dan katta: " << (isProductGreaterThan20 ? "rost" : "yolg'on") << endl;

    // 3. Sonning har ikki raqami ham toq
    cout << "\n3. 2 xonali son kiriting: ";
    cin >> son;
    bool areBothDigitsOdd = (son >= 10 && son <= 99) && ((son / 10) % 2 != 0) && ((son % 10) % 2 != 0);
    cout << "Ikkala raqam ham toq: " << (areBothDigitsOdd ? "rost" : "yolg'on") << endl;

    return 0;
}
