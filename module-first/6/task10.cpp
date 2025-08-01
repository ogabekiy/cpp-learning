#include <iostream>

using namespace std;


int main(){

    // 1. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kichigi b.

    int a=1,b=2,c=3;
    // cin >> a;
    // cin >> b;
    // cin >> c;

    bool isbMin = (a>b)&&(c>b);

    cout << isbMin << endl;

        // 2. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan 2 barobar katta.

    bool isAB = (a == 2*b);

    cout << isAB << endl;


    return 0;

}