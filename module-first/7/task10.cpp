#include <iostream>

using namespace std;



int main(){

    int son=121;
    int birlar = son%10;
    int yuzlar = (son/100)%10;
    int onlar = (son/10)%10;

    if(birlar == yuzlar){
        cout << birlar + onlar + yuzlar << endl;
    } else {
        cout << birlar * onlar * yuzlar << endl;
    }

    return 0;
}


// 3 xonali son berilgan. Agar shu son chapdan ham o'ngdan ham bir hil o'qilsa raqamlar yig'indisini, aks holda raqamlar 
// ko'paytmasini ekranga chiqaruvchi dastur tuzing.
//  Tekshirish maqsadida dastur kodini(.cpp kengaytmali faylni) yuboring.