#include <iostream>
#include <ctime> //random son olish uchun
using namespace std;


int main(){

    srand(time(0));
    int compNumber = rand()%9 + 1;

    int son;

    while(true){
        cout << "sonni kiriting" << endl;
        cin >> son;

        if(son == compNumber){
            cout << "topdingiz"<< endl;
            break;
        }


    }



    //boshlanish
    //tugash nuqta
    // upgrade

    // int i=10;
    // while(i <= 20){
    //     cout << i << endl;
    //     i++;
    // }

    // int son=100;
    // while(son >= 60){
    //     cout << son << endl;
    //     --son;
    // }


    return 0;
}