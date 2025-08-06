#include <iostream>

using namespace std;


int main(){


    int N1=4,N2=5;
    string s1="salomat",s2="malomat";



    string res1 = s1.substr(0,N1);
    string res2 = s2.substr(s2.length()-N2);

    cout << res1 + res2 << endl;



    return 0;
}