#include <iostream>


using namespace std;


int main(){


    //1
    int a=2,b=123;
    for(int i=a;i<b;i++){
        if(i%3==0){
            cout << i << endl;
        }
    }

    //2
    for(int i=a;i<b;i++){
        if(i%5==0 && i%6==0){
            cout << i << endl;
        }
    }

    





    return 0;
}



// 1. a va b sonlari berilgan. a kichik b dan. a dan b gacha 3 ga karrali sonlarni chiqaring.

// 2. a va b sonlari berilgan. a kichik b dan. a dan b gacha 5 va 6 ga karrali sonlarni chiqaring.