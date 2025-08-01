#include <iostream>

using namespace std;


int main(){ 

    // int type da son berilgan. Faqat ko'paytirish amali orqali sonni 15 chi darajasini aniqlab ekranga chiqaring. (Eslatma: ko'paytish amalini faqat 5 marta ishlatish mumkin)
    int son = 2;

    int a = son * son;

    int b  = a * a * son;

    int xa = b * b * b;

    cout << xa << endl;




    return 0;

}