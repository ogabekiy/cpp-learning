#include <iostream>
#include <ctype.h>
using namespace std;

//1
bool isAllUppercases(string str){
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            cnt++;
        }
    }
    return str.length()==cnt;
}
//2
bool isAllLowercases(string str){
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            cnt++;
        }
    }
    return str.length()==cnt;
}


int main(){
    cout << isAllUppercases("SALOM") << endl;
    cout << isAllLowercases("salAom") << endl;



    return 0;
}


// 1. 1 ta string berilgan. Berilgan stringni hamma belgisi katta harflikga tekshirib bering (funksiya tuzib bering).
// input : "HELLO"   output : true
// input : "privET"  output : false

// 2. 1 ta string berilgan. Berilgan stringni hamma belgisi kichik harflikga tekshirib bering (funksiya tuzib bering).
// input : "salom"   output : true
// input : "salom274"  output : false