#include <iostream>
using namespace std;


int main(){
    int a, amal,b;
    cin >> a;
    cin >> amal;
    cin >> b;

    //1
    if(amal = '+'){
        cout << a+b;
    }
    else if(amal = '-'){
        cout << a-b;
    }
    else if(amal = '*'){
        cout << a*b;
    }
    else if(amal = '/'){
        cout << a/b;
    }
    else if(amal = '%'){
        cout << a%b;
    }

    //2
    int x;
    cin >> x;

    int birlar = x%10;
    int onlar = (x/10)%10;
    int yuzlar = x/100;

    if(yuzlar > onlar && onlar > birlar){
        cout << "Kamayuvchi";
    } else if(birlar > onlar && onlar > yuzlar){
        cout << "o'sish tartitibida";
    } else {
        cout << "aralash";
    }

    return 0;
}


// 1.  2 ta a va b sonlar orasida +, -, *, /, % amallarini
// bajara oladigan kalkulyator dasturini yarating.

// input: a=8, ammal='+', b=45   output: 53
// input: a=9, ammal='/', b=3    output: 3 
// input: a=9, ammal='%', b=4    output: 1



// 2.  Jumlani rostlikka tekshiring: Berilgan uch xonali sonning raqamlari ketma-ket o‘suvchi yoki kamayuvchi bo‘lib joylashgan deb yozuv chiqaruvchi dastur tuzilsin.

// Misol uchun: a = 123  yoki  a = 321