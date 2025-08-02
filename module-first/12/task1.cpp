#include <iostream>

using namespace std;

int main(){
    //1
    int a=123456;
    int nechXonali=0;
    while(true){
        a = a /10;
        nechXonali++;
        if(a==0){
            break;
        }
    }
    cout << nechXonali << endl;

    a=123456;

    int sum=0;
    while(true){
        int xa = a%10;
        sum += xa;
        a = a /10;
        if(a==0){
            break;
        }
    }

    cout << sum << endl;

    //2


    return 0;
}


// 1. 1 ta son berilgan. Berilgan sonni necha xonali eknaligini aniqlang.

// 2. 1 ta son berilgan. Berilgan sonni raqamlar yeg'indisini aniqlang.

// Barchasi while operatori yordamida bajarilsin !