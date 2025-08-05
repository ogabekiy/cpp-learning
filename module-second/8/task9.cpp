#include <iostream>

using namespace std;

string minCat(string a,string b){
    int lenA = a.length();
    int lenB = b.length();
    if(lenA > lenB){
        string res = a.substr(lenA-lenB,lenA);
        return res + b;
    } else if(lenB > lenA){
        string res = b.substr(lenB-lenA,lenB);
        return a + res;
}   
    return a+ b;
 
}

int main(){

    cout << minCat("Hello","Hi") << endl;
    cout << minCat("Hello","java") << endl;
    cout << minCat("java","Hello") << endl;


    return 0;
}