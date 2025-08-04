#include <iostream>

using namespace std;

int max(int a,int b){
    if(a > b){
        return a;
    }
    return b;
}

int abs(int a){
    if(a>0){
        return a;
    }
    return a*(-1);
}

int main(){
    cout << max(1,9) << endl;
    cout << abs(-1) << endl;
    return 0;
}


// 1. c++ dasturlash tilidagi max() vazifasini bajaruvchi funksiya yarating.
// 2. c++ dasturlash tilidagi abs() vazifasini bajaruvchi funksiya yarating.