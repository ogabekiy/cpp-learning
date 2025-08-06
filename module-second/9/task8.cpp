#include <iostream>


using namespace std;

bool endOther(string a,string b){
    int lena = a.length();
    int lenb = b.length();
    if(lena > lenb){
        int cnt=0;
        string res = a.substr(lena- lenb);
        for(int i=0;i<lenb;i++){
            if(tolower(res[i]) == tolower(b[i])){
                cnt++;
            }
        }
        return cnt == lenb;
    } else if(lenb > lena){
        int cnt=0;
        string res = b.substr(lenb- lena);
        for(int i=0;i<lena;i++){
            if(tolower(res[i]) == tolower(a[i])){
                cnt++;
            }
        }
        return cnt == lena;
    } else{
        int cnt=0;
        for(int i=0;i<lena;i++){
            if(tolower(a[i]) == tolower(a[i])){
                cnt++;
            }
        }
        return cnt = lena;
    }
}


int main(){

    cout << boolalpha <<  endOther("Hiabc","abc") << endl;
    cout << boolalpha <<  endOther("AbC","HiaBc") << endl;
    cout << boolalpha << endOther("abc","abXabc") << endl;




    return 0;
}


// Funksiya nomi: endOther
// 2ta a va b satr berilgan. shu satrlardan biri ikkinchisi bilan tugasa, true qaytaring. bunda katta-kichik harflar farqlanmaydi.

// endOther("Hiabc", "abc") → true
// endOther("AbC", "HiaBc") → true
// endOther("abc", "abXabc") → true