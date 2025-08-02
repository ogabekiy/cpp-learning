#include <iostream>

using namespace std;


int main(){

    // 3 nig darajasimi yoqmi?
    int n=123;
    int i = 1;
    while (i<n)
    {
        i *= 3;
    }

    if(i==n) cout << "3 ning darajasi" << endl;
    else cout << "3 ning darajasi emas" << endl;

    return 0;
}





// n butun soni berilgan (n > 0). Agar n soni 3 ning darajasi bo'lsa  "3 ning darajasi", aks xolda “3 ning darajasi emas” degan natija chiqaruvchi dastur tuzing. 
// ESLATMA: Qoldiqli bo'lish va bo'lish amallarini ishlatmang. 

// while operatori yordamida bajarilsin !