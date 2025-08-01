
#include <iostream>


using namespace std;



int main(){
    int a = 4;
    // cin >> a;

    int b = a%4;

    switch(b){
        case 1: cout << "qish" << endl;break;
        case 2: cout << "kuz" << endl;break;
        case 3: cout << "yoz" << endl;break;
        case 0: cout << "bah0r" << endl;break;
    }


    return 0;
}


// Oy tartib raqamlari berilgan. Tartib raqamga qarab
// fasl nomini ekranga chiqarib bering.
// 1 => qish
// 4 => bahor
// ...
// 10 => kuz