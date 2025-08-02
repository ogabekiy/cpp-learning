#include <iostream>


using namespace std;

int main(){

    //1
    int son=123456782;
    int juftSonlar = 0;
    while(true){
        int xa = son%10;
        if(xa%2==0) juftSonlar += xa;
        son = son/10;
        if(son==0) break;
    }

    cout << juftSonlar << endl;

    //2 

    son=1234567829;
    int toqSonlarNechta = 0;
    while(true){
        int xa = son%10;
        if(xa%2==1) toqSonlarNechta++;
        son = son/10;
        if(son==0) break;
    }

    cout << toqSonlarNechta << endl;





    return 0;
}


// 1. 1 ta son berilgan. Berilgan sonda juft raqamlar miqdorini aniqlang.

// 2. 1 ta son berilgan. Berilgan sonda toq raqamlar miqdorini aniqlang.

// Barchasi while operatori yordamida bajarilsin ! 