#include <iostream>

using namespace std;

int main(){

    char C='x';
    string S1="xxl freshmanx",S2="99";

    for(int i=0;i<S1.length();i++){
        if(S1[i] == C){
            S1.insert(i+1,S2);
            i += S2.length();
        }
    }

    cout << S1 << endl;

    return 0;
}


// C belgisi va S1, S2 satrlari berilgan. S1 satriga shu satrda uchragan har bir C belgisidan keyin S2 satrini qo'shuvchi programma tuzilsin.