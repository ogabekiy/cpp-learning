#include <iostream>

using namespace std;

int main(){

    //1
    int s;
    for(int i=1;i<100;i++){
        s = 0;
        for(int j=1;j <=i;j++){
            if(i%j==0){
                s++;
            }
        }
        if(s == 2){
            cout << i << " ";
        }
    }

    //2
    // int a=7,b=34;
    // for(int i=a;i<b;i++){
    //     s = 0;
    //     for(int j=1;j <=i;j++){
    //         if(i%j==0){
    //             s++;
    //         }
    //     }
    //     if(s == 2){
    //         cout << i << " ";
    //     }
    // }


    return 0;
}

// 1. 100 gacha bo'lgan barcha tub sonlarni ekranga chiqaring.

// 2. a va b sonlari berilgan. a kichik b dan. a dan b gacha barcha tub sonlar
// ekranga chiqarilsin.

// Barchasi for operatori yordamida bajarilsin !