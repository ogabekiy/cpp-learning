#include <iostream>

using namespace std;

string cPlusPlus(string str){
    string res = "";
    for(int i=0;i<str.length();i++){
        if(str[i] == 'c' && str[i+1] == '+' && str[i+2] == '+'){
            res += "is c++ powerful?";
            i+=2;
        }
        else {
            res += str[i];
        }
    }

    return res;

}


int main(){

    cout << cPlusPlus("c++ yaxshi tila c++") << endl;





    return 0;
}