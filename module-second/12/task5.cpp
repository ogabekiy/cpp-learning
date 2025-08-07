#include <iostream>

using namespace std;

int main(){


    string res = "";

    string str = "Metro Boomin 3 times";
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            res += "raqam";
        
        } else if(isupper(str[i])){
            res += "katta";
            
        } else if(islower(str[i])){
            res += "kichik";
            
        }else{
            res += str[i];
        }

    }

    cout << res << endl;



    return 0;
}