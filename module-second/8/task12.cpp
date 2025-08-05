#include <iostream>

using namespace std;

string removeDogs(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]=='@'){
            str.erase(i,i+1);
        }
    }
    return str;
}


int main(){

    cout << removeDogs("Z@gogle@ok") << endl;

    return 0;
}