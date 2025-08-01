#include <iostream>


using namespace std;




int main(){

    //1
    int i=10;
    int sum=0;
    int nechta = 0;
    while(i<100){
        int bir = i%10;
        int onx = i/10;
        if(bir * onx > 12){
            nechta++;
            sum += i;
        }
        i++;
    }

    cout << sum << endl;
    cout << nechta << endl;

    //2

    // int i=100;
    // while(i<1000){
    //     int onlar = (i/10)%10;

    //     if(onlar%2==0 || onlar%5==0){
    //         cout << i << endl;
    //     }
    //     i++;
    // }




    return 0;
}


// 1. Barcha 2 xonali sonlar ichidan raqamlar ko'paytmasi 12 dan katta bo'lgan sonlarni miqdorini va yig'indisini aniqlang.

// 2. Barcha 3 xonali sonlar ichidan o'nlar xonasi 2 ga yoki 5 ga teng bo'lgan sonlarni chiqaring.