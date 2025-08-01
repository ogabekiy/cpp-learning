#include <iostream>
using namespace std;

int main() {
    float f1 = 1.2f, f2 = 2.3f, f3 = 3.4f, f4 = 4.5f;
    float f5 = 5.6f, f6 = 6.7f, f7 = 7.8f, f8 = 8.9f;
    float orta_arifmetik = (f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8) / 8.0f;
    cout << "1. 8 ta float sonlarning o'rta arifmetigi: " << orta_arifmetik << endl;

    int a = 5, b = 10;
    cout << "2. Almashtirishdan oldin: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "   Almashtirilgandan keyin: a = " << a << ", b = " << b << endl;

    int minut = 7;
    int sekund = minut * 60;
    cout << "3. " << minut << " minut = " << sekund << " sekund" << endl;

    return 0;
}
