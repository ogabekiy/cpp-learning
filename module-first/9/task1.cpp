#include <iostream>


using namespace std;


int main(){

    int a;
    cin >> a;

    switch(a){
        case 1 : cout << "dushanba"; break;
        case 2 : cout << "seshanba"; break;
        case 3 : cout << "chorshanba"; break;
        case 4 : cout << "payshanba"; break;
        case 5 : cout << "juma"; break;
        case 6 : cout << "shanba"; break;
        case 7 : cout << "yakshanba"; break;
    }



    return 0;

}

// Hafta kunining tartib raqamlari berilgan. Tartib raqamga qarab hafta kunini ekranga chiqarib bering.
// 1 => dushanba
// 2 => seshanba
// ...
// 7 => yakshanba