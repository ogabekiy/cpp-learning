#include <iostream>

using namespace std;


int main(){

    // 1. Anvarning planshetida 720 sahifali elektron kitob bor. Har bir sahifada 50 ta qator bor, har bir qatorda o‘rtacha 152 tadan belgi bor. Agar bitta belgi kompyuter xotirasidan 1 bayt joy egallasa, elektron kitobning hajmi necha MB bo‘ladi?

    int sahifa=720,qator=50,belgi= 152;

    int jamiHajm = qator * belgi * sahifa;
    cout << jamiHajm << endl;

    // 2.Akmal klaviaturada daqiqasiga N ta belgi yoza oladi. 5 ta belgi bitta so‘z deb hisoblansa Akmal 2.5 daqiqada nechta so‘z yoza oladi? N ga qiymat ekrandan kiritilsin.

    int N=4;
    // cin >> N;
    double belgilar = N * 2.5;
    cout << belgilar/5 << endl;


    return 0;
}