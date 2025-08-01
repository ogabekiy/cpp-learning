#include <iostream>

using namespace std;

int main(){ 
    int a = 12345;

    cout << (a/1000) % 10 << endl;
    
    a = 1234;

    cout << (a/100) %10 << endl;

    a = 123;
    int sum = 0;

    // cout << a/100 << endl;
    int birlar = a%10;
    int onlar = (a/10)%10;
    int yuzlar = a/100;

    sum = birlar + onlar + yuzlar;

    cout << sum << endl;

    

    // cout << sum << endl;

    

    return 0;
}