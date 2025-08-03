#include <iostream>
#include <ctype.h>

using namespace std;


int main(){
    
    string str = "Heard 'Em Say 1";
    //1
    int cnt = 0;
    for(int i=0;i<str.length() ;i++){
        if(islower(str[i]) || isdigit(str[i])){
            cnt++;
        }
    }
    cout << "Cnt " << cnt << endl;

    //2
    int cnt2 = 0;
    for(int i=0;i<str.length() ;i++){
        if(isupper(str[i]) || isdigit(str[i])){
            cnt2++;
        }
    }
    cout << "cnt2 " << cnt2 << endl;

    //3

    int cntUpper=0,cntLower=0,cntchar = 0,cntDigit=0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            cntDigit++;
        } else if(isupper(str[i])){
            cntUpper++;
        } else if(islower(str[i])){
            cntLower++;
        } else {
            cntchar++;
        }
    }
    cout << "cntDigit: " << cntDigit << endl;
    cout << "cntUpper: " << cntUpper << endl;
    cout << "cntLower: " << cntLower << endl;
    cout << "cntchar: " << cntchar << endl;

    


    return 0;
}

// 1. Berilgan str satridagi kichik harflar va raqamlarni birgalikdagi sonini aniqlo'vchi dastur tuzing.

// 2. Berilgan str satridagi katta harflar va raqamlarni birgalikdagi sonini aniqlo'vchi dastur tuzing.

// 3. 6. Berilgan str satridagi katta harflar, kichik harflar, raqamlar va belgilarni sonini alohida aniqlo'vchi dastur tuzing.