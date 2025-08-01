#include <iostream>
using namespace std;

int main() {
    int son, a;

    // 1. 2 xonali son berilgan. Raqamlarining har ikkalasi 5 dan katta
    cout << "1. 2 xonali son kiriting: ";
    cin >> son;
    bool areDigitsGreaterThan5 = (son >= 10 && son <= 99) && ((son / 10) > 5) && ((son % 10) > 5);
    cout << "Raqamlar 5 dan katta: " << (areDigitsGreaterThan5 ? "rost" : "yolg'on") << endl;

    // 2. a soni 3 ga karrali
    cout << "\n2. a sonini kiriting (3 ga karrali tekshiruv): ";
    cin >> a;
    bool isDivisibleBy3 = (a % 3 == 0);
    cout << "a soni 3 ga karrali: " << (isDivisibleBy3 ? "rost" : "yolg'on") << endl;

    // 3. a soni 7 ga karrali
    cout << "\n3. a sonini kiriting (7 ga karrali tekshiruv): ";
    cin >> a;
    bool isDivisibleBy7 = (a % 7 == 0);
    cout << "a soni 7 ga karrali: " << (isDivisibleBy7 ? "rost" : "yolg'on") << endl;

    return 0;
}
