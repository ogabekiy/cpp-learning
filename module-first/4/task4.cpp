#include <iostream>

using namespace std;

int main(){
    // 1. int type da 1 ta 4 xonali son berilgan. Shu sonni birlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring.
    int a = 1234;

    int birlar = a%10;
    int onlar = (a/10)%10;

    int almash = birlar * 10 + onlar;

    // cout << a / 100 << endl;
    int yangiSon = (a/100)*100 + almash;
    cout << yangiSon << endl;

    // 2. int type da 1 ta 3 xonali son berilgan. Shu sonni yuzlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring.

    int son = 735;
    birlar = son%10;
    onlar = (son/10)%10;
    int yuzlar = son/100;

    yangiSon = onlar * 100 + yuzlar *10 + birlar;
    cout << yangiSon << endl;



    return 0;
}