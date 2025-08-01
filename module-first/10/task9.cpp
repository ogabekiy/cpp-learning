#include <iostream>


using namespace std;


int main(){

    //1
    int a = 21;
    cin >> a;
    int i = 1;
    int boluvchilarSoni = 0;
    while(i << a){
        if(a%i==0){
            boluvchilarSoni++;
        }
        i++;
    }
    
    if(boluvchilarSoni > 2){
        cout << "true" << endl;
    } else { cout << "false" << endl;}


    //2
    // int a = 23,b=47;
    // int i = 1;
    // int boluvchilarSoniOfa = 0,boluvchilarSoniOfb=0;
    // while(i << a){
    //     if(a%i==0){
    //         boluvchilarSoniOfa++;
    //     }
    //     i++;
    // }
    // while(i < b){
    //     if(b%i==0){
    //         boluvchilarSoniOfb++;
    //     }
    //     i++;
    // }

    // if(boluvchilarSoniOfa <= 2 && boluvchilarSoniOfb <= 2){
    //     cout << a+b << endl; 
    // } else { cout << a*b << endl;}


    return 0;
}



// 1. a soni berilgan. Shu sonni tublikga tekshiring. agar tub bo'lsa true, aks holda false chiqsin.

// 2. a va b soni berilgan. Agar 2 lasi ham tub bo'lsa ularni summasini, aks holda ko'paytmasini chiqaring.