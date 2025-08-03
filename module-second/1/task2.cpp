#include <iostream>
#include <cmath>

using namespace std;


int main(){
    //1
    double son = 122.1;
    if(son >0 && son == ceil(son)){
        cout << "Natural son" << endl;
    } else {
        cout << "Natural emas" << endl;
    }

    //2
    int a = 64;
    double kvofa = sqrt(a);
    cout << kvofa << endl;

    //3

    double kubildizpfa = cbrt(a);
    cout << kubildizpfa << endl;


    return 0;
}


// 1. 1 ta son berilgan. Shu sonni naturalikga tekshirib bering.

// 2. 1 ta son berilgan. Shu sonni kvadrat ildizni aniqlang.

// 3. 1 ta son berilgan. Shu sonni kub ildizni aniqlang.