#include <iostream>
#include <cmath>
using namespace std;

int findMax(int a,int b,int c){
    int maxSon = max(a,max(b,c));
    return maxSon;
}
int findMax(int a,int b,int c,int d){
    int maxSon = max(a,max(b,max(c,d)));
    return maxSon;
}

int findMax(int a,int b,int c,int d,int e){
    int maxSon = max(a,max(b,max(c,max(d,e))));
    return maxSon;
}
int multiplication(int a){
    int res = 1;
    for(int i=1;i<a;i++){
        res *= i;
    }
    return res;
}
int multiplication(int a,int b){
    int res = 1;
    for(int i=a;i<b;i++){
        res *= i;
    }
    return res;
}
int multiplication(int a,int b,int c){
    int res = a * b * c;
    return res;
}

int main(){
    cout << findMax(1,2,3) <<  endl;
    cout << findMax(1,2,3,4) <<  endl;
    cout << findMax(1,2,3,4,5) <<  endl;

    cout << multiplication(5) << endl;
    cout << multiplication(5,10) << endl;
    cout << multiplication(5,3,4) << endl;


    return 0;
}


// 5. Funksiayaga 3 ta son berilsa ham, 4 ta son berilsa ham, 5 ta son berilsa ham kattasini aniqlab beruvchi findMax() funksiyasini yaratib bering.

// 6. Parametr sifatida 1 ta son berilsa 1 dan shu songacha ko'paytmani, 2  ta son berilsa 1- sondan 2- songacha oraliqdagi sonlar ko'paytmasini, 3 ta son berilsa shu sonlarni o'zini ko'paytmasini natija sifatida  qaytaruvchi multiplication() nomli funksiyani function overloading orqali  yozing.
//  multiplication(5)     => 120 because => (1*2*3*4*5)
//  multiplication(4,7)   => 840 because => (4*5*6*7)
//  multiplication(2,8,5) => 80  because => (2*8*5) 