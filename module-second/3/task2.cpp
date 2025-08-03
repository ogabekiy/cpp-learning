#include <iostream>

using namespace std;

void console(int a){
    for(int i=1;i<a;i++){
        cout << i << " ";
    }
}

void coBolovchilar(int a){
    for(int i=1; i <= a;i++){
        if(a%i==0){
            cout << i << " ";
        }
    }
}


int main(){


    console(8);
    cout << endl;
    coBolovchilar(18);



    return 0;
}


// 1. 1 ta butun son berilgan. 1 dan shu songacha barcha butun sonlarni ekranga chiqaruvchi funksiya tuzib bering.

// 2. 1 ta son berilgan. Shu sonni bo'luvchilarini ekranga chiqaruvchi funksiya tuzib bering