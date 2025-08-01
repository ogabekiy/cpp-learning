#include <iostream>

using namespace std;

int main(){
    int a = 278;

    cin >> a;

    int birlar = a%10;
    int onlar = (a/10)%10;
    int yuzlar = a/100;

    int yangSon = birlar * 100 + onlar * 10 + yuzlar;

    cout <<yangSon << endl;


    return 0;
}