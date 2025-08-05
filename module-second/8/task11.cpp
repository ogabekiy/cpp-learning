#include <iostream>

using namespace std;

string withoutX(string str){
    if(str.front() == 'x'){
        str.erase(0,1);
    }
    if(str.back() = 'x'){
        str.erase(str.length()-1);
    }
    return str;

}

int main(){


    cout << withoutX("xasasax") << endl;


    return 0;
}