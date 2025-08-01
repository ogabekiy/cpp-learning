#include <iostream>

using namespace std;


int main(){ 


// 1.  2 ta son berilgan. Katta soni ekranga chiqarib beruvchi dastur tuzing.

    int son1,son2;

    cin >> son1;
    cin >> son2;

    if(son1> son2){
        cout << son1 << endl;
    } else {
        cout << son2 << endl;
    }


// 2.  2 ta son berilgan. Kichik soni ekranga chiqarib beruvchi dastur tuzing.

    if(son1 < son2){
        cout << son1 << endl;
    } else {
        cout << son2 << endl;
    }

// 3.  2 ta son berilgan. Agar 2 lasi ham 2 xonali bo'lsa yig'indisini, aks holda ko'paytmasini aniqlab ekranga chiqaruvchi dastur tuzing.


    if((son1 >9 && son1 < 100) && (son2 > 9 && son2 < 100) ){
        cout << son1 + son2 << endl;
    }   else {
        cout << son1 * son2 << endl;
    }

    return 0;
}