#include <iostream>


using namespace std;


int main(){


    int n=2,k=5;

    int res = 1;

    for(int i=1;i<=k;i++){
        res = res * n;
    }

    cout << res << endl;


    return 0;
}


// 2 ta son berilgan n va k. n ni k chi darajasini aniqlang. 
// test case :
//  input                output
// n = 2, k = 5        natija = 32
// n = 3, k = 3        natija = 27
// n = 6, k = 2        natija = 36