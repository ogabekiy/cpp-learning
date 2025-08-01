#include <iostream>

using namespace std;

int main(){

    // 1.  1 ta son berilga. Agar son juft bo'lsa uni qiymatini 10 marta oshirib, aks holda o'zini ekranga chiqaring.
    int son = 4;

    if(son%2==0){
        cout << son * 10 << endl;
    }else{
        cout << son << endl;
    }

    // 2.  1 ta son berilga. Agar son toq bo'lsa uni qiymatini 10 martaga kamaytirib, aks holda o'zini ekranga chiqaring.

    if(son%2!=0){
        cout << son / 10 << endl;
    }else{
        cout << son << endl;
    }


    // 3.  1 ta son berilga. Agar son 2 xoanli bo'lsa uni qiymatini 100 ga oshirib, aks holda o'zini ekranga chiqaring.

    if(son > 9 && son < 100){
        cout << son * 100 << endl;
    }else{
        cout << son << endl;
    }




    return 0;
}

