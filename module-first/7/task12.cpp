#include <iostream>


using namespace std;


int main(){

    int son1=0,son2=19,son3=-3,son4=100;


    int min = son1;

    if(son2 < min){
        min = son2;
    }
    if(son3 < min){
        min = son3;
    }
    if(son4 < min){
        min = son4;
    }

    cout << min << endl;


    return 0;
}


// 4 son berilgan. Shu sonlar ichidan eng kichigini aniqlang (basseyin logika). Tekshirish maqsadida dastur kodini(.cpp kengaytmali faylni) yuboring.