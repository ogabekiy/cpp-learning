#include <iostream>

using namespace std;

bool isdigit(char a){
    if(a >= '0' && a <= '9'){
        return true;
    }
    return false;
}

bool islower(char a){
    if(a >= 'a' && a <= 'z'){
        return true;
    }
    return false;
}

int main(){
    cout << isdigit('5') << endl;
    cout << islower('a') << endl;

    return 0;
}


// 1. c++ dasturlash tilidagi isdigit() vazifasini bajaruvchi funksiya yarating.
// 2. c++ dasturlash tilidagi islower() vazifasini bajaruvchi funksiya yarating.