#include <iostream>

using namespace std;


int main(){

    int son=123;

    int birlar = son%10;
    int onlar = (son/10)%10;
    int yuzlar = (son/100)%10;

    if(birlar == onlar && birlar == yuzlar && yuzlar == onlar){
        cout << onlar << endl;
    } else {
        cout << birlar << endl;
    }



    return 0;
}


// 3 xonali son berilgan. Agar shu sonni raqamlari bir xil bo'lsa o'nlar xonasidagi raqamni, aks holda birlar xonasidagi 
// raqamni ekranga chiqaring. Tekshirish maqsadida dastur kodini(.cpp kengaytmali faylni) yuboring.