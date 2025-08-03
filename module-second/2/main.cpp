#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;

bool isTub(int son){
    int cnt = 0;
    for(int i=1;i<=son;i++){
        if(son%i==0) cnt++;
    }
    
    return cnt==2;
}

int getLengOfNum(int son){
    int cnt = 0;
    while(true){
        int x = son%10;
        cnt++;
        son = son/10;
        if(son==0) break;
        
    }
    return cnt;
}

int main(){
    int xa = getLengOfNum(12345);
    cout << xa << endl;

    int a = 7;

    cout << isTub(6) << endl;

    return 0;
}