#include <iostream>
#include <cmath>

using namespace std;

int kublarYigindisi(int a){
    int res = 0;
    for(int i=1;i <= a;i++){
        res += pow(i,3);
    }
    return res;
}

int main(){

    cout << kublarYigindisi(7) << endl;



    return 0;
}



// 1 dan boshlab foydalanuvchi tamonidan kiritilgan n sonigacha bo‘lgan  sonlarning kublarini yig‘indisini hisoblovchi dastur tuzilsin.
//   Misol uchun:
//   n = 7
//   Natija: S = 1^3 + 2^3 + 3^3 + 4^3+ 5^3+ 6^3+ 7^3