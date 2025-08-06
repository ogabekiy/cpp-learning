#include <iostream>


using namespace std;


int main(){


    string str = "heard em s ay";
    int a = str.find(' ');
    int b = str.rfind(' ');
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    if(a == b){
        cout << " " << endl;
    } else {
        string res = str.substr(a+1,b-a);
        cout << res << endl;
    }




    return 0;
}


// Kamida bitta probeldan iborat satr berilgan. Satridagi birinchi va ikkinchi probel orasidagi belgilarni chiqaruvchi programma tuzilsin. 
// Agar satr faqat bitta probeldan iborat bo'lsa, bo'sh satr chiqarilsin.