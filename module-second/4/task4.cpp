#include <iostream>

using namespace std;

int digitCount(int n) {
    if (n < 10) return 1;             // Bazaviy holat
    return 1 + digitCount(n / 10);    // Rekursiv chaqiriq
}
int yigindi(int a,int b){
    if(a>b){
        return 0;
    }
    return a + yigindi(a+1,b);
}

int main(){
    cout << digitCount(123) << endl;

    cout << yigindi(1,9) << endl;

    return 0;
}
// 1 2 3 4  5 6 7 8 9
//                 

// 1. ta son berilgan. Shu sonni necha xonali ekanligini rekursiya orqali aniqlang.

// 2. int toifasida a va b qiymatni qabul qiluvchi va a dan b gacha barcha sonlarni yig‘indisini aniqlovchi int turdagi recursive funksiya
//   yozing.