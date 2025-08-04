#include <iostream>


using namespace std;

char tolower(char ch){
    if(ch >=65 && ch <= 90){
        return ch+32;
    }
    return ch;
}

double pow(double a,double b){
    double res = 1;
    for(int i=1;i <=b;i++){
        res *= a;
    }
    return res;
}


int main(){
    cout << tolower('B') << endl;
    cout << pow(2,3) << endl;

    return 0;
}


// 1. c++ dasturlash tilidagi tolower() vazifasini bajaruvchi funksiya yarating.
// 2. c++ dasturlash tilidagi pow() vazifasini bajaruvchi funksiya yarating.