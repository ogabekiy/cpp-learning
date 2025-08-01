#include <iostream>

using namespace std;

int main(){
    // 1. int type da 1 ta 4 xonali son berilgan. Shu sonni minglar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring.
    int son = 3456;

    int birlar = son%10;
    int onlar = (son/10)%10;
    int yuzlar = (son/100) %10;
    int minglar = son/1000;

    // cout <<  yuzlar << endl;

    int yangiSon = onlar * 1000 + yuzlar * 100 + minglar * 10 + birlar;
    cout << yangiSon << endl;

    // 2. int type da gb berilgan. GB ni MB ga o'tkazib ekranga chiqaruvchi dastur tuzing. 

    int a = 12;
    cout << a * 1024 << " mb" << endl;


    return 0;
}