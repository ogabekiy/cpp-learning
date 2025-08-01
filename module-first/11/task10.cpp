#include <iostream>


using namespace std;


int main(){

    //1
    int birkg=4000;
    for(int i=13;i<=60;i++){
        cout << i*birkg << endl;
    }


    //2
    int n=3;
    int son=0;
    for(int i=35;i > n;i--){
        if(i%3!=0){
            cout << i << endl;
            son++;
        }
    }
    cout << son << endl;


    return 0;
}


// 1. 1 kg shakar 4000 so'm bo'lsa. 13, 14, 15, 16, 17, ..... 55, 56, 57, 58, 59, 60 kg shakar qancha bo'lishini aniqlang.

// 2. 35 dan n gacha bo'lgan 3 ga bo'linmaydigan sonlarni ekranga chiqaring va ularni sonini topuvchi dastur tuzing