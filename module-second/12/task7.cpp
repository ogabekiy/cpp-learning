#include <iostream>


using namespace std;

string getSum(string str){
    int n = str.rfind("qiyin");
    if(n==-1){
        return "PDP";
    }
    str.erase(n,5);
    return str;
}


int main(){

    cout << getSum("xa qiyin bo'ldi") << endl;




    return 0;
}