#include <iostream>

using namespace std;


int main(){

    int son1=1,son2=-4,son3=3,son4=5,son5=10;

    int sum=0,nechta=0;
    if(son1>0){
        sum += son1;
        nechta++;
    }
    if(son2>0){
        sum += son2;
        nechta++;
    }
    if(son3>0){
        sum += son3;
        nechta++;
    }
    if(son4>0){
        sum += son4;
        nechta++;
    }
    if(son5>0){
        sum += son5;
        nechta++;
    }

    cout << "sum" << sum << endl;
    cout << "nechta musbat" << nechta << endl;


    return 0;
}



// 1. 5 ta son berilgan. Shu sonlar ichida musbat sonlarni miqdorini va yig'indisini aniqlang.

// 2. 5 ta son berilgan. Shu sonlar ichida nechta 2 xonali son borligini aniqlovchi dastur tuzing.