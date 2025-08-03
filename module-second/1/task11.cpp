#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    string str = "Coun1234567890tMeOut";

    //1
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            str[str.length()-1] = str[i];
        }
    }

    cout << str << endl;
    //2

    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            cnt++;
            cout << str[i] << endl;
            if(cnt==5){
                break;
            }
        }
    }

    //3

    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;


    return 0;
}


// 1. Str satr berilgan. Shu satrdagi harflarni shu satrdagi oxirgi belgi bilan almashtiruvchi dastur tuzing.

// 2. Berilgan str satridagi dastlabki 5 ta raqamni ekranga chiqaring.

// 3. Berilgan str satridagi barcha katta harflarni kichikga o'tgazing.