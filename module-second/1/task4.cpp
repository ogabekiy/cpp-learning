#include <iostream>

using namespace std;


int main(){

    //1
    string s = "1Salom";
    swap(s[s.length()-1],s[s.length()-2]);
    cout << s << endl;


    //2
    if(isalpha(s[0])){
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }

    //3
    if(isdigit(s[0])){
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }



    return 0;
}

// 1. s satr berilgan. Shu satrning oxirgi 2 ta belgisini almashtiring.

// 2. s satr berilgan. Agar shu satrni dastlabki belgisi harf bo'lsa PDP aks holda ACADEMY ni chiqaring.

// 3. s satr berilgan. Agar shu satrni dastlabki belgisi raqam bo'lsa PDP aks holda ACADEMY ni chiqaring.