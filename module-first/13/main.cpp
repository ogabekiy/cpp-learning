#include <iostream>

using namespace std;


int main(){

    // int n=1234,sum=0;

    // while(n!=0){
    //     int x = n%10;
    //     sum += x;
    //     n /= 10;
    // }
    // cout << sum << endl;

    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j <= n;j++){
            if(i+j>n) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }





    return 0;
}