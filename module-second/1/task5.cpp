#include <iostream>
#include <ctype.h>

using namespace std;


int main(){
    string s = "12Salom";

    //1
    if(isupper(s[0]) && isupper(s[1])){
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }

    //2
    if(isdigit(s[0]) && isdigit(s[1])){
        cout << "PDP" << endl;
    } else{
        cout << "ACADEMY" << endl;
    }

    //3

    if(isdigit(s[0]) && isdigit(s[s.length() - 1])){
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }



    return 0;
}


// 1. s satr berilgan. Agar shu satrni dastlabki 2 ta belgisi katta harf bo'lsa PDP aks holda ACADEMY ni chiqaring.

// 2. s satr berilgan. Agar shu satrni dastlabki 2 ta belgisi raqam bo'lsa PDP aks holda ACADEMY ni chiqaring.

// 3. s satr berilgan. Agar shu satrni dastlabki va oxirgi belgilari raqam bo'lsa PDP aks holda ACADEMY