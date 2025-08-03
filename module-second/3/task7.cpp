#include <iostream>

using namespace std;

void printSonlarY20K(){
    for(int i=100;i<1000;i++){
        int x1 = i%10;
        int x2 = (i/10)%10;
        int x3 = i/100;
        if(x1 + x2 + x3 > 20){
            cout << i << " ";
        }
    }
}
void printSonlarK40K(){
    for(int i=100;i<1000;i++){
        int x1 = i%10;
        int x2 = (i/10)%10;
        int x3 = i/100;
        if(x1 * x2 * x3 > 40){
            cout << i << " ";
        }
    }
}


int main(){
    printSonlarY20K();
    cout << endl;
    printSonlarK40K();
    return 0;
}


// 1. Barcha 3 xonali sonlar ichida raqamlar yig’indisi 20 dan katta bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering.

// 2. Barcha 3 xonali sonlar ichida raqamlar ko'paytmasi 40 dan katta bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering.