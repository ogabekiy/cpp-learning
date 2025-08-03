#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;

// funksiyalar
//dry - dont repeat yourself
// max(a,b) , 

int main(){

    // int a=1234,b=123,c=12,d=0;
    // int maxSon = max(a,max(b,max(c,d)));
    // cout << maxSon << endl;


    // double son = 1.2;
    // double yaxlitlanganson = round(son);
    // cout << yaxlitlanganson << endl;

    // double son = 23;
    // if(son > 0 && ceil(son)==son){
    //     cout << "Natural son \n";
    // } else {
    //     cout << "Natural emas";
    // }

    // string s = "asdfg";
    // cout << s[s.length()-1] << endl;


    // string s = "salom";
    // swap(s[0],s[1]);
    // cout << s << endl;

    // string s = "1savage";
    // if(isdigit(s[0]) && isdigit(s[1])){
    //     cout << "true" << endl;
    // } else {
    //     cout << "false" << endl;
    // }

    string s = "SaloMAT";
    if(isupper(s[s.length()-1]) && isupper(s[s.length()-2])){
        cout << "XA" << endl;
    } else {
        cout << "Yoq" << endl;
    }


    return 0;
}