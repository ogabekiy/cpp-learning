#include <iostream>

using namespace std;


string getN(string str,int n){
    string res = str.substr(str.length()-n);
    return res;
}


int main(){

    cout << getN("ogabek",3) << endl;

    return 0;
}



// str satr va n soni berilgan. (str.size() > n ) malum bo'lsa shu satrni oxiridan n ta belgini qaytaruvchi funksiya tuzing.