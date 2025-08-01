#include <iostream>

using namespace std;


int main(){

    // 1. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan 30 ga katta

    // int a=2,b=32;

    // bool ottizgaKattami = (a == b + 30);

    // cout << ottizgaKattami << endl;


// 2. Rostlikga tekshiring. a , b , c , d sonlari berilgan. b soni eng katta va juft son.

    int a=1,b=8,c=3,d=4;

    bool isbZorimi = (((b>a) && (b>c) && (b>d))&& (b%2==0) );

    cout << isbZorimi << endl;



// 3. Rostlikga tekshiring. a , b , c , d sonlari berilgan. c soni eng kichik va juft.  


    bool isCengKichikvaJuft = (((c < b) && (c < a) && (c < d)) && (c%2==0));

    cout << isCengKichikvaJuft << endl;


    return 0;
}