#include <iostream>

using namespace std;

int main(){
//     1. Berilgan 2 ta sonni qiymatlarini almashtiring va yangi
// qiymatlarni ekranga chiqaruvchi dastur tuzing. (Qo'shimcha o'zgaruvchi ishlatmang).

    int son1=2,son2=7;

    son1 = son1 + son2;
    son2 = son1-son2;
    son1 = son1 - son2;

    cout << son1 << endl;
    cout << son2 << endl;

//     2. A, B va C sonlar berilgan. A ni qiymati B ga, B ni qiymati C ga va C 
// ni qiymati A ga almashtirilsin. A, B va C ning yangi qiymatlarini ekranga
// chiqaruvchi dastur tuzing.

    int A=3, B=5, C=9;

    // cout << "A ni kiriting: ";
    // cin >> A;

    // cout << "B ni kiriting: ";
    // cin >> B;

    // cout << "C ni kiriting: ";
    // cin >> C;

    int temp = A;  // A ni vaqtincha saqlab turamiz

    A = B;
    B = C;
    C = temp;

    cout << "Qiymatlar almashtirilgandan so'ng:\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;





    return 0;
}