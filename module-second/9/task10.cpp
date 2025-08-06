#include <iostream>

using namespace std;


string zipZap(string str){

    for(int i=0;i<str.length();i++){
        if(str[i] == 'z' && str[i+2] == 'p'){
            str.erase(i+1,1);
            i -= 1;
        }
    }

    return str;
}


int main(){

    cout << zipZap("zipXzap") << endl;
    cout << zipZap("zopzop") << endl;
    cout << zipZap("zzzopzop") << endl;

    return 0;
}




// Funksiya nomi: zipZap
// Satr berilgan. Satrda z va p harflarini orasida 1tagina belgi bo’lsa uni tuhshirib qoldiring, va yangi satrni qaytaring.

// zipZap("zipXzap") → "zpXzp"
// zipZap("zopzop") → "zpzp"
// zipZap("zzzopzop") → "zzzpzp"