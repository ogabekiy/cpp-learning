#include <iostream>

using namespace std;


int main(){

    int a=7;
    cin >> a;

    switch(a){
        case 1: cout << "yanvar" << endl; break;
        case 2: cout << "fevral" << endl; break;
        case 3: cout << "mart" << endl; break;
        case 4: cout << "aprel" << endl; break;
        case 5: cout << "may" << endl; break;
        case 6: cout << "iyun" << endl; break;
        case 7: cout << "iyul" << endl; break;
        case 8: cout << "avgust" << endl; break;
        case 9: cout << "sentyabr" << endl; break;
        case 10: cout << "oktyabr" << endl; break;
        case 11: cout << "noyabr" << endl; break;
    }

    return 0;
}



// Oy tartib raqamlari berilgan. Tartib raqamga qarab
// oy nomini ekranga chiqarib bering.
// 1 => yanvar
// 2 => fevral
// ...
// 12 => dekabr