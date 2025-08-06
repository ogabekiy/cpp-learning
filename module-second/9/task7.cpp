#include <iostream>
#include <ctype.h>
using namespace std;


int countCode(string str){
    int cnt = 0;
    for(int i=0;i<str.length()-3;i++){
        cout << str.substr(i,4) << " ";
        if(str.substr(i,4)[0] == 'c' && str.substr(i,4)[1] == 'o' && isalpha(str.substr(i,4)[2]) && str.substr(i,4)[3] == 'e'){
            cnt ++;
            i+=3;
        }
    }

    return cnt;
}


int main(){


    cout << countCode("aaacodebbb") << endl;
    cout << countCode("codexxcode") << endl;
    cout << countCode("cozexxcope") << endl;
    

    return 0;
}



// Funksiya nomi: countCode
// Satr berilgan. Satrda “code” so’zi necha marta borligini qaytaring. faqat “code” so’zidagi 
// d harfi o’rnida ixtiyoriy harf bo’lishi mumkin. “cope” yoki “cooe”.

// countCode("aaacodebbb") → 1
// countCode("codexxcode") → 2
// countCode("cozexxcope") → 2