#include <iostream>

using namespace std;



int main(){

    // 1.  1 ta son berilgan. Agar son 100 dan katta bo'lsa uni qiymatini 20 ga oshirib, aks holda o'zini ekranga chiqaring.

    int son=123;

    if(son > 100){
        cout << son +20 << endl;
    }else{
        cout << son << endl;
    }

    // 2.  1 ta son berilga. Agar son juft bo'lsa uni qiymatini 10 ga oshirib, aks holda o'zini ekranga chiqaring.

    if(son%2==0){
        cout << son +10 << endl;
    }else{
        cout << son << endl;
    }

    // 3.  1 ta son berilga. Agar son toq bo'lsa uni qiymatini 10 ga kamaytirib, aks holda o'zini ekranga chiqaring.

    if(son%2!=0){
        cout << son -10 << endl;
    }else{
        cout << son << endl;
    }



    return 0;
}