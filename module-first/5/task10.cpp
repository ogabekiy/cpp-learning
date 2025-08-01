#include <iostream>

using namespace std;

int main(){

    // a ta binoda b ta qavat bor. Xar qavatda c tadan xona bor hamma xonada d tadan stul bor. Bu binolarda jami nechta parta borligini aniqlo'vchi dastur tuzing. (a,b,c,d consoledan qiymat oladi) (1 ta partaga 2 ta stul kerak)

    int a, b, c, d;

    cout << "Binolar sonini kiriting (a): ";
    cin >> a;

    cout << "Har bir binodagi qavatlar sonini kiriting (b): ";
    cin >> b;

    cout << "Har bir qavatdagi xonalar sonini kiriting (c): ";
    cin >> c;

    cout << "Har bir xonadagi stullar sonini kiriting (d): ";
    cin >> d;

    int jami_stul = a * b * c * d;

    int jami_parta = jami_stul / 2;

    cout << "Umumiy partalar soni: " << jami_parta << endl;


    return 0;
}