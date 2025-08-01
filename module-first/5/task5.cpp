#include <iostream>

using namespace std;


int main(){
//     1. int type da dollar va yevro berilgan. Ular jami necha so'm bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
// (Eslatman : 1 dollar = 12600 so'm, 1 yevro = 14500 so'm deb hisoblansin)
    int dollar=5000,yevro = 300;
    int jamiSom = dollar * 12600 + yevro * 14500;

    cout << jamiSom << endl;


//     2. int type da son berilgan. Faqat ko'paytirish amali orqali sonni 10 chi darajasini aniqlab ekranga chiqaring. 
// (Eslatma: ko'paytish amalini faqat 4 marta ishlatish mumkin)

    int son = 2;
    int a = son * son;
    int b = a * a;
    int c = b * b;
    int xa = c * a;
    cout << xa << endl;


    return 0;
}