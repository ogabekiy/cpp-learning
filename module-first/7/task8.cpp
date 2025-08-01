#include <iostream>

using namespace std;


int main(){
    int son=23;

    int birlar = son%10;
    int onlar = (son/10)%10;

    if(birlar == onlar){
        cout << birlar << endl;
    }
    else{
        cout << onlar << endl;
    }



    return 0;
}


//  2 xonali son berilgan. Agar shu sonni raqamlari bir xil bo'lsa birlar xonasidagi raqamni, aks holda o'nlar xonasidagi 
// raqamni ekranga chiqaring. Tekshirish maqsadida dastur kodini(.cpp kengaytmali faylni) yuboring.