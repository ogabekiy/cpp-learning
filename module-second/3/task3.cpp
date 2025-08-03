#include <iostream>
#include <ctype.h>
using namespace std;

void console(int a,int b){

    for(int i=a;i < b;i++ )
    {
        if(i%5==0 || i%6==0){
            cout << i << " ";
        }
    }
}

void printUpperCases(string str){
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            cout << str[i] << " ";
        }
    }
}

void printAlphabets(string str){
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            cout << str[i] << " ";
        }
    }
}


int main(){
    console(4,89);

    cout << endl;
    printUpperCases("Watch This, Im Yeat");
    cout << endl;
    printAlphabets("21savage");



    return 0;
}


// 1. 2 ta son berilgan. Shu sonlar orasidagi barcha 6 yoki 5 ga karrali sonlarni ekranga chiqarib beruvchi funksiya tuzib bering.

// 2. 1 ta string berilgan. Shu stringdagi barcha katta harflarni ekranga chiqaruvchi funksiya tuzib bering.

// 3. 1 ta string berilgan. Shu stringdagi barcha harflarni ekranga chiqaruvchi funksiya tuzib bering.