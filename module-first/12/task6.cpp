#include <iostream>

using namespace std;

int main(){

    //1
    int son=12346;
    while(true){
        int xa = son % 10;
        son = son / 10;
        if(xa==5){
            cout << "5 soni mavjud" << endl;
            break;
        }
        if(son==0){
            cout << "5 soni yo'q" << endl;
            break;
        }
    }

    //2
    son = 1350;
    while(true){
        int xa = son % 10;
        son = son / 10;
        if(xa%2==0){
            cout << "juft son mavjud" << endl;
            break;
        }
        if(son==0){
            cout << "juft soni mavjud emas" << endl;
            break;
        }
    }







    return 0;
}



// 1. 1 ta butun son berilgan. Berilgan son raqamlari orasida 5 raqami bor 
// yo’qligini aniqlovchi programma tuzilsin.

// 2. 1 ta butun son berilgan. Berilgan son raqamlari orasida juft raqamlar bor yo’qligini aniqlovchi programma tuzilsin.  

// Barchasi while operatori yordamida bajarilsin !