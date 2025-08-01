#include <iostream>

using namespace std;


int main(){

//     1. Faylning hajmi baytlarda berilgan. Fayl hajmini to’liq kilobaytlarda 
// ifodalovchi programma tuzilsin.

    double bayt=1230;
    double kb = bayt/1024;
    cout << kb << endl;


//     2. Agar internet tezligi 750 kbayt/sekund bo'lsa 1.8 GBayt axborotni 
// necha sekundda uzatish mumkinligini aniqlaydigan dastur tuzing.

    double tezlik = 750, dataValueInGb = 1.8;
    
    double ketadiganSekund = (dataValueInGb * 1024 * 1024 )/tezlik;
    cout << ketadiganSekund << endl;
    return 0;

}