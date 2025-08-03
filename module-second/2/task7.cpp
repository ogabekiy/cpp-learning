#include <iostream>
#include <ctype.h>
using namespace std;

//1
string turnUpperToLower(string str){
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}
//2
string turnLowerrToUpper(string str){
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    return str;
}
//3
int findAmountOfOk(string str){
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'o' && str[i+1] == 'k'){
            cnt++;
        }
    }
    return cnt;
}


int main(){

    cout << turnUpperToLower("SaLom") << endl;
    cout << turnLowerrToUpper("SaLom") << endl;
    cout << findAmountOfOk("ok salom ok") << endl;
    cout << findAmountOfOk("okokokokokk") << endl;

    return 0;
}



// 1. Berilgan str satridagi barcha katta harflarni kichikga o'tgazing (funksiya tuzib bering).

// 2. Berilgan str satridagi barcha kichik harflarni kattag o'tgazing (funksiya tuzib bering).

// 3. 1 ta string berilgan. Shu stringdagi "ok" lar miqdorini aniqlab beruvchi funksiya tuzib bering.
// input : "ok salom ok"   output : 2
// input : "okokokokokk"   output : 5