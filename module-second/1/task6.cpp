#include <iostream>
#include <ctype.h>

using namespace std;


int main(){

    string s = "21savage";
    //1
    if(islower(s[s.length()-1]) && islower(s[s.length() - 2])){
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }
    

    //2

    if(!(isdigit(s[0])) && !(isdigit(s[s.length() -1]))){
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }

    //3

    if(isupper(s[s.length() - 1]) && isupper(s[s.length() -2])){
        cout << "PDP" << endl;
    }else{
        cout << "ACADEMY" << endl;
    }


    return 0;
}



// 1. s satr berilgan. Agar shu satrni oxirgi 2 ta belgisi kichik harf bo'lsa PDP aks holda ACADEMY

// 2. s satr berilgan. Agar shu satrni dastlabki va oxirgi belgilari raqam bo'lmasa PDP aks holda ACADEMY

// 3. s satr berilgan. Agar shu satrni oxirgi 2 belgisi katta harf bo'lsa PDP aks holda ACADEMY