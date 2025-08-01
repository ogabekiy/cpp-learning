#include <iostream>


using namespace std;



int main(){

    int a,b;
    cin >> a;
    cin >> b;
    char amal;
    cin >> amal;

    switch(amal){
        case '+' : {
            cout << a + b << endl; break;
        }
        case '-': {
            cout << a-b << endl; break;
        } 
        case '*':{
            cout << a * b << endl; break;
        }
        case '/' :{
            cout << a/b << endl; break;
        }
    }



    return 0;
}



// 2 ta son berilgan shu sonlar ustida matematik operatorlardan fo'ydalanib kichik kalkulyator qilib
//  bering '+', '-', '*', '/'.