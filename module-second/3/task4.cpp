#include <iostream>
#include <ctype.h>
using namespace std;

void printIfNotAlpha(string str){
    for(int i=0;i<str.length();i++){
        if(!isalpha(str[i])){
            cout << str[i] << " ";
        }
    }
}

void darajagaOshirish(int N){
    int natija = 1;
    for(int i=1;i<=N;i++){
        natija *= N;
    }
    cout << natija << endl;
}

int main(){


    printIfNotAlpha("21savage$");
    cout << endl;
    darajagaOshirish(3);



    return 0;
}


// 1. 1 ta string berilgan. Shu stringdagi barcha harf bo'lmagan belgilarni ekranga chiqaruvchi funksiya tuzib bering. 

// 2. N soni berigan, N sonini N marotaba chiqaruvchi funksiya tuzing.

// Tekshirish maqsadida dastur kodini (.cpp kengaytmali faylni yuboring)