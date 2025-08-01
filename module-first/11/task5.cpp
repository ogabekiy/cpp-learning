#include <iostream>

using namespace std;


int main(){
    //1
    for(int i=100;i<1000;i++){
        int x1 = i%10;
        int x2 = (i/10)%10;
        int x3 = (i/100)%10;
        if(x1 + x2 + x3 >18){
            cout << i << endl;
        }
    }

    //2
    for(int i=100;i<1000;i++){
        int x1 = i%10;
        int x3 = (i/100)%10;
        if(x1==x3){
            cout << i << endl;
        }
    }



    return 0;
}


// 1.  Barcha 3 xonali sonlar ichidan raqamlar yig'indisi 18 dan katta sonlarni ekranga chiqaring.

// 2. Barcha 3 xonali sonlar ichidan palindrom sonlarni ekranga chiqaring. (misol : 858, 484, 151)