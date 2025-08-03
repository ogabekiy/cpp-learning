#include <iostream>

using namespace std;

void printMeatPrice(double n){
    for(int i=30;i<=60;i++){
        cout << i << " kg go'sht narxi: " << i * n << endl;
    }
}

void printSonlar(){
    for(int i=10;i<100;i++){
        int x1 = i%10;
        int x2 = i/10;
        if(x1 + x2 > 8){
            cout << i << " ";
        }
    }
}

int main(){

    printMeatPrice(100);
    cout << endl;
    printSonlar();


    return 0;
}


// 1. 1 kg go'sht narxi berilgan. 30, 31, 32 ... 60 kg go'sht narxini ekranga chiqarib beruvchi funksiya tuzib bering.

// 2. Barcha 2 xonali sonlar ichida raqamlar yig’indisi 8 dan katta bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering. 