#include <iostream>

using namespace std;

void printToqSonlar(){
    for(int i=10;i<100;i++){
        int x1 = i%10;
        int x2 = i/10;
        if(x1%2==1 && x2%2==1){
            cout << i << " ";
        }
    }
}

void printToqSonlar3Xonali(){
    for(int i=100;i<1000;i++){
        int x1 = i%10;
        int x2 = (i/10 )%10;
        int x3 = i/100;
        if(x1%2==1 && x2%2==1 && x3%2==1){
            cout << i << " ";
        }
    }
}


int main(){

    printToqSonlar();
    cout << endl;
    printToqSonlar3Xonali();


    return 0;
}



// 1. Barcha 2 xonali sonlar ichida raqamlari toq bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering. misol uchun(15, 77, 31, 95)

// 2. Barcha 3 xonali sonlar ichida raqamlari toq bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering. misol uchun(157, 757, 331, 915)