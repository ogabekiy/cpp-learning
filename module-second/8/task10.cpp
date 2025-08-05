#include <iostream>

using namespace std;

string deFront(string str){
    if(str[0]=='a'){
        string res = str.erase(1,1);
        cout << res << endl;
        return res;
    }
    if(str[1]=='b'){
        return str.erase(0,0);
    }   return str.erase(0,2);
}

int main(){


    cout << deFront("abay") << endl;


    return 0;
}