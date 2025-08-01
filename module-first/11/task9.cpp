#include <iostream>


using namespace std;


int main(){

    //1
    int a=24;
    int f=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            f++;
        }   
    }
    if(f==2){
        cout << "true" << endl;
    } else { cout << "false" << endl;}

    //2
    // int a=24,b=23;
    // int fa=0,fb=0;
    // for(int i=1;i<=a;i++){
    //     if(a%i==0){
    //         fa++;
    //     }   
    // }
    // for(int i=1;i<=b;i++){
    //     if(b%i==0){
    //         fb++;
    //     }   
    // }

    // if(fb==2 && fa==2){
    //     cout << a+b << endl;
    // } else {
    //     cout << a*b << endl;
    // }
    






    return 0;
}


// 1. a soni berilgan. Shu sonni tublikga tekshiring. Agar tub bo'lsa true, aks holda false chiqsin.

// 2. a va b soni berilgan. Agar 2 lasi ham tub bo'lsa ularni summasini, aks holda ko'paytmasini chiqaring.