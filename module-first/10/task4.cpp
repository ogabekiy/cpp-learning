#include <iostream>

using namespace std;


int main(){


    //1
    int a=2,b=70;
    int sum=0;
    while(a<=b){
        if(a%8==0){
            sum++;
        }
        a++;
    }
    cout << sum << endl;


    //2
    // int a=3,b=90;
    // while(a<b){
    //     if(a%9==0 || a%5==0){
    //         cout << a << endl;
    //     }
    //     a++;
    // }


    //3
    // int a= 1;
    // int sum=0;
    // while(a<100){
    //     if(a%2==0){
    //         sum += a;
    //     }
    //     a++;
    // }
    // cout << sum << endl;



    return 0;
}


// 1. a va b sonlari berilgan. a kichik b dan. Shu sonlar orasidagi 8 ga karrali sonlarni nechta ekanini aniqlang.

// 2. a va b sonlari berilgan. a kichik b dan. b dan a gacha 9 ga yoki 5 ga bo'linadigan sonlarni ekranga chiqaring.

// 3. 1 dan 100 gacha toq sonlarni yig'indisini aniqlang.