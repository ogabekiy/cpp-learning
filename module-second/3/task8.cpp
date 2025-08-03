#include <iostream>
#include <cmath>
using namespace std;

void printToqSonlar(){
    for(int i=1;i<100;i++){
        if(i%2==1){
            cout << i << " ";
        }
    }
}
void sqrtsonlar(int n){
    for(int i=1;i<=n;i++){
        cout << sqrt(i) << " ";
    }
}

int main(){
    printToqSonlar();
    cout << endl;
    sqrtsonlar(10);

    return 0;
}



// 1. 1 dan 100 gacha sonlar ichidan toq sonlarni ekranga chiqarib beruvchi funksiya tuzib bering.

// 2. 1 ta butun son berilgan. 1 dan shu songacha barcha butun sonlarni ildizni ekranga chiqaruvchi funksiya tuzib bering.