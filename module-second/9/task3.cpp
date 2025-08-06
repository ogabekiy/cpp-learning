#include <iostream>


using namespace std;


int main(){

    string str1="salomat",str2="alik";
    char c = 'a';
    for(int i=0;i < str1.length();i++){
        if(str1[i] == c){
            str1.insert(i,str2);
            i += str2.length();
        }
    }
    cout << str1 << endl;



    return 0;
}