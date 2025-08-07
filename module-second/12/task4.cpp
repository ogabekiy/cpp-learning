#include <iostream>

using namespace std;

bool isUnli(char a){
    a = tolower(a);
    if(a == 'a' || a == 'e' || a == 'u' || a == 'i' || a == 'o') {
        return true;
    }
    return false;
}

int main(){

    string str = "metro boomin";
    for(int i=0;i<str.length();i++){
        if(isUnli(str[i])){
            str.erase(i,1);
            i--;
        }
    }

    cout << str << endl;
}