// 1. 5 ta son berilgan. katta va kichigini aniqlab beruvchi funksiya tuzib being.

// 2. 5 ta son berilgan. shu sonlarni ko'paytmasini va yeg'indisini aniqlab beruvchi funksiya tuzib being.
#include <iostream>
#include <cmath>
using namespace std;

//1
void findMaxAndMin(double a,double b,double c,double d, double e){
    int maxSon = max(a,max(b,max(c,max(d,e))));
    int minSon = min(a,min(b,min(c,min(d,e))));
    cout << "maxSon: " << maxSon << endl;
    cout << "minSon: " << minSon << endl;
}

void amallar(int a,int b, int c, int d, int e){
    int yigindi  = a + b + c + d + e;
    int kopaytma = a*b*c*d*e;

    cout << "Yigindi: " << yigindi << endl;
    cout << "Kopaytma: " << kopaytma << endl;
}


int main(){

    findMaxAndMin(2,3,4,5,6);
    amallar(2,3,4,5,6);


    return 0;
}