#include <iostream>

using namespace std;

char theEnd(string str,bool a){
    if(a){
        return str[0];
    }
    return str[str.length()-1];
}

int main(){


    cout << theEnd("Heloo",true) << endl;

    return 0;
}