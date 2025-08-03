#include <iostream>
#include <ctype.h>
using namespace std;

//1
string turnAllToStar(string str){
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            str[i] = '*';
    }
    }

    return str;
}
//2
string swapping(string str){
    for(int i=0;i<str.length();i++){
        if(str[i] == 'x'){
            str[i] = 'y';
    } else if(str[i] == 'y'){
        str[i] = 'z';
    }
    }

    return str;
}


int main(){
    cout << turnAllToStar("SalomAt") << endl;
    cout << swapping("xyz") << endl;

    return 0;
}


// 1. Berilgan str satridagi barcha kichik harflarni '*' bilan almashtiruvchi (funksiya tuzib bering).

// 2. Berilgan str satridagi barcha 'x' larni 'y' bilan, 'y' larni 'z' bilan alishtirib bering (funksiya tuzib bering).