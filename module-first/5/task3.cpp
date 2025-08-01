#include <iostream>

using namespace std;


int main(){

    // 1. int type da hafta va soat berilgan. Ular jami necha kun bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
    int hafta=2,soat=12;

    double jamiKun = hafta * 7 + soat/24;

    cout << jamiKun << endl;

    // 2. int type da minut va soat berilgan. Ular jami necha sekund bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.

    int minut =34,soat=2;

    int jamiSekund = minut * 60 + soat * 60 * 60;
    cout<< jamiSekund << endl;


    return 0;
}