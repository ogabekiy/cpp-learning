#include <iostream>
#include <ctype.h>
using namespace std;

//1
int findAmountOfLowerCases(string str){
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            cnt++;
        }
    }
    return cnt;
}
//2
int findAmountOfSpaces(string str){
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            cnt++;
        }
    }
    return cnt;
}
//3
int findAmountOfAts(string str){
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='@'){
            cnt++;
        }
    }
    return cnt;
}


int main(){

    cout << findAmountOfLowerCases("Salom") << endl;
    cout << findAmountOfSpaces("O x ox o") << endl;
    cout << findAmountOfAts("@salom") << endl;

    return 0;
}


// 1. 1 ta string berilgan. Shu stringdagi kichik harflar miqdorini aniqlab beruvchi funksiya tuzib bering.

// 2. 1 ta string berilgan. Shu stringdagi ' '(spacelar) miqdorini aniqlab beruvchi funksiya tuzib bering.

// 3. 1 ta string berilgan. Shu stringdagi '@'lar miqdorini aniqlab beruvchi funksiya tuzib bering.