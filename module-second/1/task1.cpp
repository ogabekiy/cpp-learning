#include <iostream>
#include <cmath>
using namespace std;


int main(){ 
    //1
    int a=1234,b=12,c=1,d=12,e=-1,f=4;
    int maxSon = max(a,(max(b,max(c,max(d,max(e,f))))));
    cout << maxSon << endl;

    //2
    int minSon = min(a,(min(b,min(c,min(d,min(e,f))))));
    cout << minSon << endl;

    //3
    double son = 3.5;
    cout << round(son) << endl;


    return 0;
}

// 1. 6 ta son berilgan. Berilgan sonlardan kattasini aniqlang.

// 2. 6 ta son berilgan. Berilgan sonlardan kichigini aniqlang.

// 3. 1 ta son berilgan. Shu sonni yaxlidlab bering.