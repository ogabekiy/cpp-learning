#include <iostream>

using namespace std;

string nTwice(string str,int n){
    string res1 = str.substr(0,n);
    string res2 = str.substr(str.length()-n,str.length());
    return res1 + res2;
}

int main(){

    cout << nTwice("Hello",2) << endl;
    cout << nTwice("Chocolate",3) << endl;


    return 0;
}