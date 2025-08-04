#include <iostream>
#include <ctype.h>
using namespace std;

void calculate(int a,int b){
    cout << "yigindi: " << a + b << endl;
}
void calculate(int a, int b, int c){
    cout << "kopaytmasi: " << a*b*c << endl;
}
void getAmountDigit(int a){
    int x = 0;
    while(a!=0){
        a = a/10;
        x++;
    }
    cout << x << endl;
}
void getAmountDigit(string str){
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main(){
    calculate(3,4);
    calculate(3,4,5);
    getAmountDigit(1);
    getAmountDigit("21savage");
    return 0;
}

// 1. 2 ta sonni parametr sifatida qabul qilganda ularning yig’indisini, 3 ta sonni parametr sifatida qabul
//  qilganda esa ularning ko‘paytmasini hisoblab, natija sifatida qaytaruvchi calculate() overloading funksiyasini yozing.

// 2. Agar funksiyaga int berilsa nech xonaligini, string berilsa nechta raqami borligini aniqlab beruvchi getAmountDigit() nomli overloading function yarating.