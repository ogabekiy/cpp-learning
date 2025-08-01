#include <iostream>

using namespace std;



int main(){

    //1
    int i=100;
    while(i<1000){
        int xona1 = i%10;
        int xona2 = (i/10)%10;
        int xona3 = (i/100)%10;

        if((xona1 + xona2 + xona3) > 20){
            cout << i << endl;
        }
        i++;
    }


    //2

    // int i=100;
    // while(i<1000){
    //     int xona1 = i%10;
    //     int xona3 = (i/100)%10;

    //     if(xona1 == xona3){
    //         cout << i << endl;
    //     }
    //     i++;
    // }




    return 0;
}


// 1. Barcha 3 xonali sonlar ichidan raqamlar yig'indisi 20 dan katta sonlarni ekranga chiqaring.

// 2. barcha 3 xonali sonlar ichidan palindrom sonlarni ekranga chiqaring. (misol : 858, 484, 151)