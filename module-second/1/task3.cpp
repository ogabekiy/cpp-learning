#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;


int main(){

    //1
    int son =12;
    for(int i=1;i<son;i++){
        cout << sqrt(i) << endl;
    }

    //2
    string s = "slaom";
    cout << s[s.length()-1] << endl;

    //3
    swap(s[0],s[1]);
    cout << s << endl;





    return 0;
}


// 1. 1 ta butun son berilgan. 1 dan shu songacha bo'lgan barcha sonlarni ildizini 
// ekranga chiqarib bering. (sqrt)

// 2. s satr berilgan. Shu satrning oxirgi belgisini ekranga chiqaring.

// 3. s satr berilgan. Shu satrning dastlabki 2 ta belgisini almashtiring.