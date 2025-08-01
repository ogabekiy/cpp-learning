#include <iostream>

using namespace std;


int main(){
    //1
    int a=2,b=123;
    int nechta=0;
    for(int i=a;i<=b;i++){
        if(i%10==0){
            nechta++;
        }
    }
    cout << nechta << endl;

    //2
    for(int i =a;i<=b;i++){
        if(i%7==0 || i%8==0){
            cout << i << endl;
        }
    }

    //3
    int sum = 0;
    for(int i=0;i<100;i+=2){
        sum += i;
    }
    cout << sum << endl;



    return 0;

}


// 1. a va b sonlari berilgan. a kichik b dan. Shu sonlar orasidagi 10 ga karrali sonlarni miqdorini aniqlang.

// 2. a va b sonlari berilgan. a kichik b dan. b dan a gacha 7 ga yoki 8 ga bo'linadigan sonlarni ekranga chiqaring.

// 3. 1 dan 100 gacha juft sonlarni yig'indisini aniqlang.