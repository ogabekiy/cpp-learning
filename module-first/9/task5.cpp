#include <iostream>


using namespace std;


int main()
{

    int a=999;
    // cin >>a;

    switch(a/100){
        case 1: cout << "Bir yuz "; break;
        case 2: cout << "Ikki yuz "; break;
        case 3: cout << "Uch yuz "; break;
        case 4: cout << "To'rt yuz "; break;
        case 5: cout << "Besh yuz "; break;
        case 6: cout << "Olti yuz "; break;
        case 7: cout << "Yetti yuz "; break;
        case 8: cout << "Sakkiz yuz "; break;
        case 9: cout << "To'qqiz yuz "; break;
    }
    switch((a/10)%10){
        case 1: cout << "o'n "; break;
        case 2: cout << "yigirma "; break;
        case 3: cout << "o'ttiz "; break;
        case 4: cout << "qirq "; break;
        case 5: cout << "ellik "; break;
        case 6: cout << "oltmish "; break;
        case 7: cout << "yetmish "; break;
        case 8: cout << "sakson "; break;
        case 9: cout << "to'qson "; break;
    }
    switch(a%10){
        case 1: cout << "bir" << endl; break;
        case 2: cout << "ikki" << endl; break;
        case 3: cout << "uch" << endl; break;
        case 4: cout << "to'rt" << endl; break;
        case 5: cout << "besh" << endl; break;
        case 6: cout << "ol" << endl; break;
        case 7: cout << "yetti" << endl; break;
        case 8: cout << "sakkiz" << endl; break;
        case 9: cout << "to'qqiz" << endl; break;
    }



    return 0;
}
// 1 ta son berilgan [100-999] oraliqda. Shu sonni so'z qilib chiqarib bering.
// 100 => yuz
// 101 => bir yuz bir
// ...
// 999 => to'qqiz yuz to'qson to'qqiz