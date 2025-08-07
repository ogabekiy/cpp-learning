#include <iostream>


using namespace std;


int main(){


    int n=4;

    for(int i=n;i>=0;i--){
        for(int j=i+3;j >= n;j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}