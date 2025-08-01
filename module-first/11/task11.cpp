#include <iostream>

using namespace std;



int main(){

    //1
    int a=24,b=39;
    int boluvchilarSoniOfA=0,boluvchilarSoniOfB=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            boluvchilarSoniOfA++;
        }
    }
    for(int i=1;i<=b;i++){
        if(b%i==0){
            boluvchilarSoniOfB++;
        }
    }
    cout << boluvchilarSoniOfA << endl;
    cout << boluvchilarSoniOfB << endl;
    if(boluvchilarSoniOfA > boluvchilarSoniOfB){
        cout << "A soni boluvchilari kop" << endl;
    } else if(boluvchilarSoniOfA==boluvchilarSoniOfB){
        cout << "Boluvchilar soni teng" << endl;
    } else {
        cout << "B soni boluvchilari soni koproq" << endl;
    }

    //2

    // int a=12,b=15;
    // int sum=0;
    // for(int i=a;i<=b;i++){
    //     sum += i;
    // }
    // cout << sum << endl;


    return 0;
}


// 1. Ikkata a va b soni berilgan. Berilgan sonlarni qaysi birini bo'luvchilari ko'pligini topuvchi dastur tuzing.

// 2. Ikkta a va b sonlari berilgan. a soni b dan kichik a dan b gacha bo'lgan sonlarni yeg'indisi aniqlovchi dastur tuzing. ( a va b  yegindiga kirmasin ).