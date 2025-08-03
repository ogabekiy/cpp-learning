#include <iostream>
#include <ctype.h>
using namespace std;

//1
int add(int son1,int son2){
    int res = son1 + son2;
    return res;
}

//2
int findAmountOfDigits(string str){
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            cnt++;
        }
    }
    return cnt;
}
//3
int findAmountOfUppercases(string str){
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    // int a=1,b=4;
    // int res = add(a,b);
    // cout <<"Yigindi: " << res <<endl;
    // cout << findAmountOfDigits("slaom1234") << endl;
    cout << findAmountOfUppercases("NiggaisDead") << endl;


    return 0;
}


// 1. 2 ta son berilgan. Shu sonlarni qo'shib qaytaruvchi funksiya tuzib bering.

// 2. 1 ta string berilgan. Shu stringdagi raqamlar miqdorini aniqlab beruvchi funksiya tuzib bering.

// 3. 1 ta string berilgan. Shu stringdagi katta harflar miqdorini aniqlab beruvchi funksiya tuzib bering.