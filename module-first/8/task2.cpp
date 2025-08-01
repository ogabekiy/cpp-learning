#include <iostream>

using namespace std;


int main(){

    int son = 4;
    //1
    // cin >> son;
    if(son > -999 && son < -100){
        cout << "uch xonali manfiy";
    } else if(son > -100 && son < -10){
        cout << "ikki xonali manfiy";
    } else if(son > -10 && son < 0){
        cout << "bir xonali manfiy";
    } else if(son == 0){
        cout << "nol soni";
    } else if(son > 0 && son < 10){
        cout << "bir xonali musbat son";
    } else if(son > 10 && son < 100){
        cout << "ikki xonali musbat son";
    } else if(son > 100 && son < 1000){
        cout << "uch xonali musbat son";
    } else{
        cout << "[-999; 999] oraliqda son kiriting]";
    }

    //2
    if(son >= 1000 && son <= 9999){
        if(son%2==0){
            cout << "4 xonali juft son";
        } else{
            cout << "4 xonali toq son";
        }
    } else if(son >= 100 && son < 1000){
        if(son%2==0){
            cout << "3 xonali juft son";
        } else{
            cout << "3 xonali toq son";
        }
    } else if(son > 9 && son < 100){
        if(son%2==0){
            cout << "2 xonali juft son";
        } else{
            cout << "2 xonali toq son";
        }
    } else {
        if(son%2==0){
            cout << "1 xonali juft son";
        } else{
            cout << "1 xonali toq son";
        }
    }



    return 0;
}

// 1. Qiymati [-999; 999] oraliqda yotuvchi butun son berilgan. Son qiymatiga mos ravishda 
// “uch xonali manfiy”, 
// “ikki xonali manfiy”, 
// “bir xonali manfiy”, 
// “nol soni”, 
// “bir xonali musbat son”, 
// “ikki xonali musbat son”,
// “uch xonali musbat son” 
// kabi satrlarni ekranga chiqaruvchi dastur tuzilsin.

// 2. Qiymati [1; 9999] bo‘lgan x butun soni berilgan. Bu sonning  qiymatiga mos ravishda quyidagi satrlarni chop eting: 
// “to‘rt xonali juft son”, 
// “to‘rt xonali toq son”, 
// “uch xonali juft son”, 
// “uch xonali toq son”, 
// “ikki xonali juft son”, 
// “ikki xonali toq son”, 
// “bir xonali juft son”, 
// “bir xonali toq son”, 
// va … ekranga chiqaruvchi dastur tuzilsin.