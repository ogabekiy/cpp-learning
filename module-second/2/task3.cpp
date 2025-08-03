#include <iostream>

using namespace std;

//1
int findAmountOfFloors(int son){
    int cnt = 0;
    while(true){
        son = son/10;
        cnt++;
        if(son==0){
            break;
        }
    }
    return cnt;
}
//2
int findAmountOfOdds(int a,int b){
    int cnt=0;
    for(int i=a;i<b;i++){
        if(i%2==1){
            cnt++;
        }
    }
    return cnt;
}
//3
bool isTub(int a){
    int cnt=0;
    for(int i=1;i<=a;i++){
        if(a%i==0) cnt++;
    }
    cout << cnt << endl;
    return cnt==2;
}

int main(){ 

    cout << findAmountOfFloors(12345) << endl;
    cout << findAmountOfOdds(1,6) << endl;
    cout << isTub(5) << endl;

    return 0;
}

// 1. 1 ta son berilgan. Berilgan sonni necha xonali ekanligini aniqlab beruvchi funksiya tuzib bering.

// 2. 2 ta son berilgan. 1 chi son 2 chi sondan kichik. shu ikkala sonlar orasidagi toq sonlarni miqdorini aniqlab beruvchi funksiya tuzib bering.

// 3. 1 ta son berilgan. Tub likga tekshirib beruvchi funksiya tuzib bering.