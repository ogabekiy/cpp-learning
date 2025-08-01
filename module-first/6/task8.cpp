#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 1. a soni 5 ga bo'linmaydi
    cout << "1. a sonini kiriting (5 ga bo'linmaslik): ";
    cin >> a;
    bool notDivisibleBy5 = (a % 5 != 0);
    cout << "a soni 5 ga bo'linmaydi: " << (notDivisibleBy5 ? "rost" : "yolg'on") << endl;

    // 2. a soni 4 ga bo'linib, 3 ga bo'linmaydi
    cout << "\n2. a sonini kiriting (4 ga bo'linadi, 3 ga bo'linmaydi): ";
    cin >> a;
    bool divBy4NotBy3 = (a % 4 == 0) && (a % 3 != 0);
    cout << "a soni 4 ga bo'linib, 3 ga bo'linmaydi: " << (divBy4NotBy3 ? "rost" : "yolg'on") << endl;

    // 3. a > b
    cout << "\n3. a va b sonlarini kiriting (a > b):\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    bool aGreaterThanB = (a > b);
    cout << "a > b: " << (aGreaterThanB ? "rost" : "yolg'on") << endl;

    // 4. a == b
    cout << "\n4. a va b sonlarini kiriting (a == b):\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    bool aEqualsB = (a == b);
    cout << "a == b: " << (aEqualsB ? "rost" : "yolg'on") << endl;

    return 0;
}
