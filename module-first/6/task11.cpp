#include <iostream>

using namespace std;


int main(){

    // 1. Rostlikga tekshiring a va b sonlari berilgan. b soni a sonidan 5 barobar katta.

    int a=2,b=8;

    bool isBA = (b == 5 * b);

    cout << isBA << endl;


// 2. Rostlikga tekshiring a va b sonlari berilgan. Ixtiyoriy bittasi 2 chisidan 4 barobar katta.

    bool isAny = ((a == 4 * b) || (b == 4 *a));

    cout << isAny << endl;



    return 0;
}