#include <iostream>

using namespace std;


int main(){


    // 1. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar musbat bo'lsa "musbat" ni, aks holda "musbat emas" ni ekranga chiqaruvchi dastur tuzing.
    
    int son = 4;

    if(son > 0){
        cout << "musbat";
    }else{
        cout << "musbat emas";
    }

    // 2. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar 2 xonali bo'lsa "C++" ni, aks holda "C#" ekranga chiqaruvchi dastur tuzing.

    if(son > 9 && son < 100){
        cout << "C++";
    }else{
        cout << "C#";
    }

    // 3. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar juft bo'lsa "juft" ni, aks holda "juft emas" ni ekranga chiqaruvchi dastur tuzing.

    if(son%2==0){
        cout << "juft" << endl;
    } else {
        cout << "juft emas" << endl;
    }


    return 0;

}