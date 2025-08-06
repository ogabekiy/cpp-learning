#include <iostream>

using namespace std;


string withoutString(string a,string b){
    int lenb = b.length();
    for(int i=0; i< a.length();i++){
        if(a.substr(i,lenb) == b){
            a.erase(i,lenb);
            i -= lenb;
        }

    }

    return a;
}


int main(){

    cout << withoutString("Hello there", "llo") << endl;
    cout << withoutString("Hello there", "e") << endl;
    cout << withoutString("Hello there", "x") << endl;
    cout << withoutString("abyyyab", "yy") << endl;


    return 0;
}



// Funksiya nomi: withoutString
// 2ta a va b satrlar berilgan. a satrni ichida barcha b satrlari bolsa, olib tashlang va natijani qaytaring.

// withoutString("Hello there", "llo") → "He there"
// withoutString("Hello there", "e") → "Hllo thr"
// withoutString("Hello there", "x") → "Hello there"
// withoutString("abyyyab", "yy") → "abyab"