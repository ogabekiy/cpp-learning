#include <iostream>

using namespace std;

string extraEnd(string str){
    string res = str.substr(str.length()-2,str.length());
    return res = res + res + res;
}

int main(){

    cout << extraEnd("Hello") << endl;

    return 0;
}