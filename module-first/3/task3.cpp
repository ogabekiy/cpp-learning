#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 8, c = 3, d = 4;
    int yigindi = a + b + c + d;
    cout << "1. 4 ta int sonlar yig'indisi: " << yigindi << endl;

    float x = 2.5, y = 3.0, z = 4.5;
    float orta3 = (x + y + z) / 3;
    cout << "2. 3 ta float sonlar o'rta arifmetigi: " << orta3 << endl;

    float p = 1.5, q = 2.5, r = 3.5, s = 4.5, t = 5.5;
    float orta5 = (p + q + r + s + t) / 5;
    cout << "3. 5 ta float sonlar o'rta arifmetigi: " << orta5 << endl;

    return 0;
}
