#include <iostream>

using namespace std;

string makeAbba(string a,string  b){
    string res = a.append(b).append(b).append(a);
    return res;
}

int main(){

    cout << makeAbba("Hi","bye") << endl;

    return 0;
}