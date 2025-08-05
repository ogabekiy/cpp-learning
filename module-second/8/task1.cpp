#include <iostream>

using namespace std;

string helloName(string str){
    string res = "Hello ";
    return res.append(str) + '!';
}

int main(){

    cout << helloName("Ogabek") << endl;


    return 0;
}