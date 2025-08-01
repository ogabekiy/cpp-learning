#include <iostream>


using namespace std;


int main(){
    int son =12306;
    int birlar = son%10;
    int onlar = (son/10)%10;
    int yuzlar = (son/100)%10;
    int minglar = (son/1000)%10;
    int onchminglar = (son/10000)%10;

    int max = birlar;
    if(onlar > max){
        max = onlar;
    }
    if(yuzlar > max){
        max = yuzlar;
    }
    if(minglar > max){
        max = minglar;
    }
    if(onchminglar > max){
        max = onchminglar;
}   

    cout << max << endl;
}

// 5 xonali son berilgan. Shu son ichidagi eng katta raqamni aniqlang (basseyin logika)