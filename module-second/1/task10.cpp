#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    string str = "Stronger0000";
    //1
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            str[i] = '9';
        }
    }
    cout << str << endl;

    //2
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            str[i] = '*';
        }
    }
    cout << str << endl;

    //3

    for(int i=0;i<str.length();i++){
        if(!isalnum(str[i])){
            str[0] = str[i];
        }
    }

    cout << str << endl;


    return 0;
}


// 1. Berilgan str satridagi barcha raqamlarni '9' bilan almashtiruvchi dastur tuzing.

// 2. Berilgan str satridagi barcha kichik harflarni '*' bilan almashtiruvchi dastur tuzing.

// 3. Str satr berilgan. Shu satrdagi raqam ham, harf ham bo'lmagan belgilarni shu satrdagi birinchi belgi bilan almashtiruvchi dastur  tuzing.