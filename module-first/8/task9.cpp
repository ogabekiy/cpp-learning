#include <iostream>

using namespace std;

int main() {

    //1
    string password;
    cin >> password;

    if(password == "Aziz20"){
        cout << "Assalomu alaykum Azizbek, Xush kelibsiz";
    } else {
        cout << "Siz xato passwordni kiritidingiz";
    }

    //2
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a != b && b != c && a != c){
        cout << "Natija 0" << endl;
    }   else if(a == b && b == c && a == c){
        cout << "Natija 20" << endl;
    } else {
        cout << "Natija 10" << endl;
    }


    return 0;
}



// 1.  Azizbek yangi sotib olgan kompyuteriga password “Aziz20” qo‘ydi. Bir kuni ukasi Azizbekning
//  ruxsatisiz kompyuteriga kirmoqchi bo‘ldi va parolni terdi. Shu paytda agar password to‘g‘ri terilsa “Assalomu alaykum Azizbek, 
//  Xush kelibsiz” aks xolda esa “Siz xato passwordni kiritidingiz degan” yozuvni chiqaruvchi dastur tuzilsin.

// 2.  Sizda a, b va c raqamlari bilan lotereya chiptasi bor. Agar barcha raqamlar bir-biridan farq qilsa, “Natija 0”.\
 Agar barcha raqamlar bir xil bo‘lsa, “Natija 20”. Agar ikkita raqam bir xil bo‘lsa, “Natija 10” kabi yozuvlarni ekranga chiqaruvchi dastur tuzilsin.