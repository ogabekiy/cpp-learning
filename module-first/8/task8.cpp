#include <iostream>


using namespace std;


int main(){

    //1
    int salary, minimumWage;

    cin >> salary;
    cin >> minimumWage;

    if(salary <= 5 * minimumWage){
        cout << salary * 0.09 << endl;
    } else if(salary > 5 * minimumWage && salary <= 10 * minimumWage){
        cout << salary * 0.16 << endl;
    } else if(salary > 10 * minimumWage){
        cout << salary * 0.23 << endl;
    }

    //2

    int number;

    cin >> number;

    if(number == 101){
        cout << "101-o‘t o’chirish xizmati." << endl;
    } else if(number == 102){
        cout << "102-militsiya xizmati." << endl;
    } else if(number == 103){
        cout << "103-tez tibbiy yordam xizmati." << endl;
    } else if(number == 104){
        cout << "tabbiy gaz" << endl;
    }




    return 0;
}


// 1.  Ishchining oylik maoshi (salary) va o‘rnatilgan tartibdagi eng kam oylik ish haqi (minimum wage) berilgan. Quyidagilar asosida  
// ishchidan olinadigan bir oylik daromad soliqni hisoblovchi dastur tuzilsin.
//  Agar salary <= 5 * minimumWage bo‘lsa, 9%;
//  Agar salary > 5 * minimumWage va salary <= 10 * minimumWage bo‘lsa, 16%;
//  Agar salary > 10 * minimumWage bo‘lsa, 23%.

// 2.  Foydalanuvchi tomonidan ushbu raqamlarga qo‘ng‘iroq amalga oshirilsa quyidagicha yozuv chiqaruvchi dastur tuzilsin.
// 101-o‘t o’chirish xizmati.
// 102-militsiya xizmati.
// 103-tez tibbiy yordam xizmati.
// 104-tabiiy gaz xizmati. 