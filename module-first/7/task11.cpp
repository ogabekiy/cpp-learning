#include <iostream>

using namespace std;

int main(){


    int son1=5,son2=2,son3=1,son4=19,son5=5,son6=0;

    int max = son1;

    if(son2 > max){
        max = son2;
    }
    if(son3 > max){
        max = son3;
    }
    if(son4 > max){
        max = son4;
    }
    if(son5 > max){
        max = son5;
    }
    if(son6 > max) {
        max = son6;
    }


    cout << max << endl;


    return 0;
}


// 6 son berilgan. Shu sonlar ichidan eng kattasini aniqlang (basseyin logika).
//  Tekshirish maqsadida dastur kodini(.cpp kengaytmali faylni) yuboring.
