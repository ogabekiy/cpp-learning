#include <iostream>

using namespace std;


string makeOutWord(string a,string b){
    a.insert(2,b);
    return a;
}

int main(){

    cout << makeOutWord("<<>>","yay") << endl;
    


    return 0;
}