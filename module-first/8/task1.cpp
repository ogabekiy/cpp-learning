#include <iostream>

using namespace std;


int main(){

    // 1.
    int a =3,b=0,c=-1;
    // cin >> a;
    // cin >> b;
    // cin >> c;

    int max = a;

    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }

    cout << "max" << max << endl;


    // 2.
    int min;
    if(a < b && a <c){
        min = a;
    } else if( b < a && b < c){
        min = b;
    } else {
        min = c;
    }

    cout << min;
    cout << (a+b+c)-(min +max);
    cout << max;






    return 0;
}


// 1. Uchta bir biriga teng bo‘lmagan a, b, c natural sonlar berilgan bo‘lsin. Ularning ichidan eng kattasini topuvchi dastur tuzilsin.
	
// 	Misol uchun: 
// 	a = 12, b = 27, c = 19  
// 	Natija: max = 27

// 2.  Uchta bir biriga teng bo‘lmagan a, b, c natural sonlar berilgan bo‘lsin. Ushbu sonlarni o‘sish tartibida chiqaruvchi dastur tuzilsin.

// 	Misol uchun: 
// 	a = 19, b = 27, c = 12  
// 	Natija: c = 12, a = 19, b = 27