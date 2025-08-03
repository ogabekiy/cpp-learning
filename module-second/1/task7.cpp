#include <iostream>
#include <ctype.h>


using namespace std;


int main(){

    string s = "Life is only thing we need";

    //1
    if(isupper(s[0]) && islower(s[s.length() -1])){
        cout << "HARF" << endl;
    } else {
        cout << "HARF EMAS" << endl;
    }

    //2
    int cnt = 0;
    for(int i=0;i< s.length();i++){
        if(isdigit(s[i])){
            cnt++;
        }
    }
    cout << cnt << endl;

    //3
    int cntAlpha = 0;
    for(int i=0;i<s.length() ;i++){
        if(isalpha(s[i])){
            cntAlpha++;
        }
    }
    cout << cntAlpha << endl;




    return 0;
}


// 1. s satr berilgan. Agar shu satrni dastlabki belgisi katta harf va oxirgi belgisi kichik harf bo'lsa HARF aks holda HARFEMAS ni ekranga chiqaring

// 2. Berilgan str satridagi raqamlar sonini aniqlo'vchi dastur tuzing.

// 3. Berilgan str satridagi harflar sonini aniqlo'vchi dastur tuzing.