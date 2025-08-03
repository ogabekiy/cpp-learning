#include <iostream>
#include <ctype.h>
using namespace std;

//1
string reverseString(string str){
    string rev = "";
    for(int i=str.length()-1;i>= 0;i--){
        rev += str[i];
    }
    return rev;
}
//2
bool isPalindrom(string str){
    string rev = "";
    for(int i=str.length()-1;i>= 0;i--){
        rev += str[i];
    }
    return rev== str;
}
//3
bool isAllDigits(string str){
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            cnt++;
        }
    }

    return cnt == str.length();
}


int main(){

    cout << reverseString("salom") << endl;
    cout << isPalindrom("xa") << endl;
    cout << isAllDigits("1234a567") << endl;

    return 0;
}


// 1. 1 ta string berilgan. Berilgan stringni teskari qilib qaytaruvchi funksiya tuzib bering.

// 2. 1 ta string berilgan. Berilgan stringni palindrom likga tekshirib beruvchi funksiya tuzib bering.

// 3. 1 ta string berilgan. Berilgan stringni hamma belgisi raqamlikga tekshirib bering (funksiya tuzib bering).
// input : "3243"   output : true
// input : "s1122"  output : false