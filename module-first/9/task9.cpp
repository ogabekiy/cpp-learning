#include <iostream>


using namespace std;



int main(){

    int sum;
    cin >> sum;

    char valyuta;
    cin >> valyuta;

    switch(valyuta){
        case 'd': cout << sum / 12630 << endl; break;
        case 'r': cout << sum / 159 << endl; break;
        case 'y': cout << sum / 14840 << endl; break;
    }


    return 0;
}


// Kichik pul o'tkazma qilib bering. Sizning pulingiz so'mda. Uni dollarga, yevroga, rublga o'tgazib beruvchi dastur tuzing.
// (consoledan pul miqdori va pul birligi kirib keladi)