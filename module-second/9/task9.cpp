#include <iostream>


using namespace std;

bool sameStarChar(string str){
    int cnt=0,c=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='*'){
            cnt++;
        }
        if((i==0 && str[i]=='*') || (i==str.length()-1 && str[i]=='*') || (str[i]=='*' && str[i-1] == str[i+1])){
            c++;
        }
    }
    return cnt == c;
}

int main(){


    cout << boolalpha <<  sameStarChar("xy*yzz") << endl;
    cout << boolalpha <<  sameStarChar("xy*zzz") << endl;
    cout << boolalpha << sameStarChar("xa*az") << endl;


    return 0;
}




// Funksiya nomi: sameStarChar
// Satr berilgan. Satrda har 1ta uchragan ‘*’ belgisidan 1ta oldingi va 1ta keyingi belgilar teng bo’lsa,
//  true qaytaring. Agar ‘*’dan 1ta oldin yoki 1ta keyin belgi bolmasa e’tibor qilmang.

// sameStarChar("xy*yzz") → true
// sameStarChar("xy*zzz") → false
// sameStarChar("*xa*az") → true