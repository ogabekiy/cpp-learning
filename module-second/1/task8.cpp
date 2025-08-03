#include <iostream>
#include <ctype.h>

using namespace std;


int main(){

    string str = "Slaughter Gang Shit";
    //1
    int cntUpper = 0;
    for(int i=0;i<str.length() ;i++){
        if(isupper(str[i])){
            cntUpper++;
        }
    }
    cout << "cntUpper: " << cntUpper << endl;

    //2
    int cntLower = 0;
    for(int i=0;i<str.length() ;i++){
        if(islower(str[i])){
            cntLower++;
        }
    }
    cout << "cntLower: " << cntLower << endl;

    //3
    int cnt = 0;
    for(int i=0;i<str.length() ;i++){
        if(!isalnum(str[i])){
            cnt++;
        }
    }
    cout << "cnt: " << cnt << endl;
    



    return 0;
}


// 1. Berilgan str satridagi katta harflar sonini aniqlo'vchi dastur tuzing.

// 2. Berilgan str satridagi kichik harflar sonini aniqlo'vchi dastur tuzing.

// 3. Berilgan str satridagi raqam ham, harf ham bo'lmagan belgilar sonini aniqlo'vchi dastur tuzing.