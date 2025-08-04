#include <iostream>

using namespace std;

bool isupper(char s){
    return (s >= 'A' && s <= 'Z');
}
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c; 
}


int main(){
    cout << isupper('Z') << endl;
    cout << toupper('z') << endl;

    return 0;
}


// 1. c++ dasturlash tilidagi isupper()  vazifasini bajaruvchi funksiya yarating.
// 2. c++ dasturlash tilidagi toUpper() vazifasini bajaruvchi funksiya yarating.