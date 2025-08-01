#include <iostream>


using namespace std;


int main(){ 
    //1
    int sum=0;
    int nechta = 0;
    for(int i=10;i<=99;i++){
        int x1 = i%10;
        int x2 = i/10;
        if(x1*x2 > 15){
            sum += i;
            nechta++;
        }
    }
    cout << "yigindi " << sum << endl;
    cout << "nechtaligi " << nechta << endl;

    //2
    for(int i =100;i<=999;i++){
        int onlar = (i/10)%10;
        if(onlar==4 || onlar == 7){
            cout << i << endl;
        }
    }


    return 0;
}






// 1. Barcha 2 xonali sonlar ichidan raqamlar ko'paytmasi 15 dan katta bo'lgan sonlarni miqdorini va yig'indisini aniqlang.

// 2. Barcha 3 xonali sonlar ichidan o'nlar xonasi 4 ga yoki 7 ga teng bo'lgan sonlarni chiqaring.