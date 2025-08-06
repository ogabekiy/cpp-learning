#include <iostream>

using namespace std;


int main(){

    string S  = "CalloCab";
    for(int i=0;i<S.length();i++){
        if(S[i]=='C'){
            S.insert(i,"C");
            i++;
        }
    }

    cout << S << endl;




    return 0;
}