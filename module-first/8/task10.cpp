#include <iostream>

using namespace std;

int main(){

    //1
    int battery=23;
    // cin >> battery;

    if(battery < 20){
        cout << "Mashinani qayta quvvatlang";
    } else if(battery > 20 && battery < 40){
        cout << "Mashinada kam zaryad miqdori mavjud";
    } else {
        cout << "Mashinada quvvat miqdori yetarlicha";
    }


    //2

    int n =123;
    cout << "Sonni kiriting (1-999): ";
    // cin >> n;

    if (n < 1 || n > 999) {
        cout << "Noto'g'ri kiritildi!";
        return 0;
    }

    int yuzlik = n / 100;
    int onlik = (n % 100) / 10;
    int birlik = n % 10;

    if (yuzlik == 1) cout << "bir yuz ";
    else if (yuzlik == 2) cout << "ikki yuz ";
    else if (yuzlik == 3) cout << "uch yuz ";
    else if (yuzlik == 4) cout << "to'rt yuz ";
    else if (yuzlik == 5) cout << "besh yuz ";
    else if (yuzlik == 6) cout << "olti yuz ";
    else if (yuzlik == 7) cout << "yetti yuz ";
    else if (yuzlik == 8) cout << "sakkiz yuz ";
    else if (yuzlik == 9) cout << "to'qqiz yuz ";

    if (onlik == 1) {
        if (birlik == 0) cout << "o'n";
        else if (birlik == 1) cout << "o'n bir";
        else if (birlik == 2) cout << "o'n ikki";
        else if (birlik == 3) cout << "o'n uch";
        else if (birlik == 4) cout << "o'n to'rt";
        else if (birlik == 5) cout << "o'n besh";
        else if (birlik == 6) cout << "o'n olti";
        else if (birlik == 7) cout << "o'n yetti";
        else if (birlik == 8) cout << "o'n sakkiz";
        else if (birlik == 9) cout << "o'n to'qqiz";
    } else {
        if (onlik == 2) cout << "yigirma ";
        else if (onlik == 3) cout << "o'ttiz ";
        else if (onlik == 4) cout << "qirq ";
        else if (onlik == 5) cout << "ellik ";
        else if (onlik == 6) cout << "oltmish ";
        else if (onlik == 7) cout << "yetmish ";
        else if (onlik == 8) cout << "sakson ";
        else if (onlik == 9) cout << "to'qson ";

        if (birlik == 1) cout << "bir";
        else if (birlik == 2) cout << "ikki";
        else if (birlik == 3) cout << "uch";
        else if (birlik == 4) cout << "to'rt";
        else if (birlik == 5) cout << "besh";
        else if (birlik == 6) cout << "olti";
        else if (birlik == 7) cout << "yetti";
        else if (birlik == 8) cout << "sakkiz";
        else if (birlik == 9) cout << "to'qqiz";
    }




    return 0;
}



// 1.  Aqlli tesla mashinasida agar uning quvvat miqdori 20% dan kam bo‘lsa “Mashinani qayta quvvatlang” 
// degan yozuv, 21% dan 40% gacha bo‘lsa “Mashinada kam zaryad miqdori mavjud”, 41% dan 100% gacha bo‘lsa 
// “Mashinada quvvat miqdori yetarlicha” deb yozuv chiqaruvchi dastur tuzilsin. 

// 2.  1-999 oraliqdagi sonlar berilgan bo‘lsin. Foydalanuvchi tomonidan kiritilgan sonni so‘zlar yordamida ekranga chiqaruvchi dastur tuzilsin.
// Misol uchun: 
// N = 12  
// Natija: o‘n ikki.