#include <iostream>

using namespace std;

int getLength(string str){
    string res = "";
    for(int i=str.length()-1;i >= 0;i--){
        if(isalpha(str[i]) && str[i-1] == ' '){
            res += str[i];
            return res.length();
        } else if(isalpha(str[i])){
            res += str[i];
        }
    }
    return res.length();
}

int main(){

    string str = "  salom   pdp     ";
    cout << getLength(str) << endl;

    // string res = "";
    // for(int i=str.length()-1;i >= 0;i--){
    //     if(isalpha(str[i]) && str[i-1] == ' '){
    //         res += str[i];
    //         break;
    //     } 
    // }

    return 0;
}

// Eslatma, quyidagi savolni vector qilib ishlasangiz ham bo'ladi.

// So'zlardan tashkil topgan matn berilgan. Oxirgi so'zni uzunligini
// topuvchi dastur tuzing.

// test case:
// input : s = "  salom   pdp     "     output : 3
// input : s = "       bekkkk     "     output : 5