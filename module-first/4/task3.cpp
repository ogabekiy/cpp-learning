#include <iostream>

using namespace std;

int main(){

    int a = 123;
    int birlar = a%10;
    int onlar = (a/10)%10;
    int yuzlar = a/100;

    int kopaytma = birlar * onlar * yuzlar;
    cout << kopaytma << endl;

    int b = 69;

    birlar = b%10;
    onlar = b/10;
    cout << birlar * onlar << endl;

    int son = 234;
    birlar = son%10;
    onlar = (son/10)%10;
    yuzlar = son/100;

    int teskariSon = birlar*100 + onlar * 10 + yuzlar;
    cout << teskariSon << endl;



    return 0;
}