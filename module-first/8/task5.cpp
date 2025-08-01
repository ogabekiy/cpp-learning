#include <iostream>
using namespace std;

int main(){

    // 1
    int a,b,c;
    cin >>a;
    cin >> b;
    cin >> c;

    if(a == b || b == c || a == c){
        cout << "hech bolmasa ikkitasi bir biriga teng";
    } else {
        cout << "Nima deyish kk";
    }

    // 2

    int k;
    cin >> k;

    if(k > 40){
        cout << "enough";
    } else{
        cout << 40- k << endl;
    }




    return 0;
}


// // 1. Jumlani rostlikka tekshiring: Berilgan uchta butun sonlarning hech bo‘lmaganda ikkitasi bir biriga teng deb yozuv chiqaruvchi dastur tuzilsin.

// // 2. Elektromobilning 100 km masofani bosib o‘tish uchun akkumlatoridagi to‘liq quvvatning 40% sarflaydi. Ayni paytda uning quvvati (energy) K% qolgan.
//  Haydovchi D (distance) km
//  masofaga borishi uchun quvvat yetarli yoki yetarli emasligini aniqlang. Agar bor quvvat yetarli 
//  bo‘lmasa, yana necha % quvvat kerakligi (required power) ni aniqlang. Bunda K va D foydalanuvchi tomonidan kiritiladi.