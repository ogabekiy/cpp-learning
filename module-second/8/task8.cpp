#include <iostream>

using namespace std;


string concat(string a,string b){
    string res = "";
    if(a.back() == b.front()){
        res = a.append(b.erase(0,1));
        return res;
    }
    res = a.append(b);
    return res;

}


int main(){


    cout << concat("abc","cat") << endl;
    cout << concat("dog","cat") << endl;



    return 0;
}