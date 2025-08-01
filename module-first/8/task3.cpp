#include <iostream>

using namespace std;


int main(){

    int son;
    cin >> son;

    if ( (son % 4 == 0 && son % 100 != 0) || (son % 400 == 0) ) {
        cout << "Kabisa yili";
    } else {
        cout << "Kabisa yili emas";
    }

    if(son >=0 && son <= 55){
        cout << "Qoniqarsiz";
    } else if (son >= 56 && son <= 70){
        cout << "Qoniqarli";
        } else if (son >= 71 && son <= 85){
        cout << "Yaxshi";
    } else{
        cout << "alo";
    }



    return 0;
}



// 1.  Foydalanuvchi tomonidan kiritilgan yilning kabisa yili yoki kabisa  yili emasligini aniqlovchi dastur tuzilsin.
// 	Misol uchun: 
// 	Yil = 2016
// 	Natija: Kabisa yili.

// 2.  O‘quv yili davomida talaba to‘plagan reyting ballga mos ravishda uning o‘zlashtirishi haqida xabar chiqaruvchi dastur tuzilsin.
// * (0 - 55)    qoniqarsiz
// * (56 - 70)   qoniqarli
// * (71 - 85)   yaxshi
// * (86 - 100)  a'lo