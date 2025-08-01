#include <iostream>


using namespace std;

int main(){
    int kun;
    double jarima;

    //1
    cin >> jarima;
    cin >> kun;

    if(kun <= 3){
        cout << jarima * 0.1;
    } else if(kun > 15){
        cout << jarima * 1.1;
    } else {
        cout << jarima;
    }

    //2

    int gradus;
    cin >> gradus;

    if(gradus < 25){
        cout << "oynalar ochilsin";
    } else {
        cout << "oynalar yopilsin";
    }





    return 0;
}


// 1.  Aziz mashinada xarakatlanayotgan paytda bilmasdan qizil chiroqdan o‘tib ketdi. Agar u jarimani 3 kun ichida to‘lasa
//  10% arzon to‘lov amalga oshiradi. Agar u 15 kundan ortiq kun ichida jarimani o‘tkazib yuborsa 10% ortiq to‘lov qiladi.
//  (Foydalanuvchi tomonidan jarima miqdori va kun kiritilsin).  

// 2.  Issiqxona xarorati ichkaridagi o‘simliklar yaxshi rivojlanishi uchun 25^0 bo‘lishi lozim. Agar
//  issiqxona xarorati 25^0 dan oshib ketsa “oynalar ochilsin” aks holda 25^0dan tushib ketsa “oynalar
//   yopilsin” degan yozuv chiqaruvchi dastur tuzilsin.
// Misol uchun: n = 21  Natija: oynalar yopilsin