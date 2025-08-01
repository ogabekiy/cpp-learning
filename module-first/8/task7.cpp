#include <iostream>

using namespace std;

int main(){

    //1
    string svetafor;
    cin >> svetafor;

    if(svetafor == "qizil"){
        cout << "harakatlanishdan to'xtang" << endl;
    } else if(svetafor == "sariq"){
        cout << "harakatlanishga tayyorlaning" << endl;
    } else {
        cout << "harakatlanishni davom ettiring" << endl;
    }

    //2

    int a,b,c;
    // cin >> a >> b >> c;

    int max;
    int min;
    if(a > b && a > c){
        max = a;
    } else if(b > a && b > c){
        max = b;
    } else {
        max = c;
    }

    if(a < b && a < c){
        min = a;
    } else if(b < a && b < c){
        min = b;
    } else {
        min = c;
    }

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;



    


    return 0;
}


// 1.  Aqlli tesla mashinasi “qizil” chiroqni ko‘rsa “harakatlanishdan to‘xtang”
//  degan yozuv chiqadi, yoki “sariq” chiroq yonsa “harakatlanishga tayyorlaning”, aks
//   holda “yashil” chiroq yonsa “harakatlanishni davom ettiring” degan ogohlantiruvchi dastur tuzilsin.
// Masalan: qizil       Natija: harakatlanishdan to‘xtang

// 2.  Uchta son berilgan. Shu sonlarni avval kichigini keyin kattasini ekranga chiqaruvchi dastur tuzilsin.
// 	Misol uchun: 
// 	a = 12, b = 27, c = 19  
// 	Natija: min = 12, max = 27