#include <iostream>
using namespace std;

float Add(float a, float b) {
    return a + b;
}
float Add(float a, float b, float c) {
    return a + b + c;
}
string Add(string a, string b) {
    return a + b;
}

void repeat(int a,int b){
    for(int i=1;i<=b;i++){
        cout << a << " ";
    }
}
void repeat(int a){
    for(int i=1;i<=a;i++){
        cout << a << " ";
    }
}

int main() {
    cout << Add(1.2, 3.4) << endl;             
    cout << Add(1.1, 2.2, 3.3) << endl;       
    cout << Add("Nma, ", "gap!") << endl; 
    cout << endl;
    repeat(7,7);
    cout << endl;
    repeat(7);
    return 0;
}


// 1. 2 ta float berilsa ham, 3 ta float berilsa ham, 2 ta string berilsa ham Add() funksiyasini yaratib bering overloading yordamida.

// 2. Agar 2 ta a va b sonlari berilsa a soni b marta ekranga chiqaruvchi Agar 1 ta a soni 
// berilsa a soni a marta ekranga chiqaruvchi repeat() nomli void funksiya (pratsedura) tuzib bering.