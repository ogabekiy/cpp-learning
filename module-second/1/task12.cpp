#include <iostream>
#include <ctype.h>

using namespace std;


int main(){

    string str = "Overduexy";
    //1
    // for(int i=0;i<str.length();i++){
    //     if(islower(str[i])){
    //         str[i] = toupper(str[i]);
    //     }
    // }
    // cout << str << endl;

    //2

    for(int i=0;i<str.length();i++){
        if(str[i] =='y'){
            str[i] = 'z';
        } else if(str[i]=='x'){
            str[i] = 'y';
        }
    }

    cout << str << endl;




    return 0;
}


// 1. Berilgan str satridagi barcha kichik harflarni kattag o'tgazing.

// 2. Berilgan str satridagi barcha 'x' larni 'y' bilan, 'y' larni 'z' bilan almashtiruvchi dastur tuzing.