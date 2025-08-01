#include <iostream>


using namespace std;



int main(){

    //1
    int a=34,b=45;
    int i=1;
    int aBoluvchilarsoni=0,bBoluvchilarsoni=0;
    while(i<=a){
        if(a%i==0){
            aBoluvchilarsoni++;
        }
        i++;
    }
    i=1;
    while(i<=b){
        if(b%i==0){
            bBoluvchilarsoni++;
        }
        i++;
    }
    if(aBoluvchilarsoni > bBoluvchilarsoni){
        cout << "A soni boluvchilar kop";
    } else {cout << "B bo'luvchilari soni ko'p" << endl;}

    //2

    // int a=2,b=98;
    // int sum=0;
    // while(a<=b){
    //     sum += a;
    //     a++;
    // }
    // cout << sum << endl;



    return 0;
}


// 1. Ikkita a va b soni berilgan. Berilgan sonlarni qaysi birini bo'luvchilari ko'pligini topuvchi dastur tuzing.

// 2. Ikkita a va b sonlari berilgan. a soni b dan kichik a dan b gacha bo'lgan sonlarni yeg'indisi aniqlovchi dastur tuzing. ( a va b  yegindiga kirmasin ).