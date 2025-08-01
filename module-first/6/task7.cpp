#include <iostream>
using namespace std;

int main() {
    int a;

    // 1. a soni 3 ga va 8 ga karrali
    cout << "1. a sonini kiriting (3 va 8 ga karralik): ";
    cin >> a;
    bool isDivisibleBy3And8 = (a % 3 == 0) && (a % 8 == 0);
    cout << "a soni 3 va 8 ga karrali: " << (isDivisibleBy3And8 ? "rost" : "yolg'on") << endl;

    // 2. a soni 7 ga yoki 9 ga karrali
    cout << "\n2. a sonini kiriting (7 yoki 9 ga karralik): ";
    cin >> a;
    bool isDivisibleBy7Or9 = (a % 7 == 0) || (a % 9 == 0);
    cout << "a soni 7 yoki 9 ga karrali: " << (isDivisibleBy7Or9 ? "rost" : "yolg'on") << endl;

    // 3. a soni 3 ga karrali
    cout << "\n3. a sonini kiriting (3 ga karralik): ";
    cin >> a;
    bool isDivisibleBy3 = (a % 3 == 0);
    cout << "a soni 3 ga karrali: " << (isDivisibleBy3 ? "rost" : "yolg'on") << endl;

    return 0;
}
