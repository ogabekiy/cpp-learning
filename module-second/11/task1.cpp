#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr =  {11, 12, 12, 12, 31 , 31 }    ;
    int maxCount = 0;
    int mostFrequent;
    for(int i=0;i<arr.size();i++){
        int count = 0;
        for(int j=0; j< arr.size();j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    cout << mostFrequent << endl;
    return 0;
}

// Eslatma, quyidagi savolni vector qilib ishlasangiz ham bo'ladi.

// 1 o'lchamli massive berilgan. Shu masivedagi eng ko'p qatnashgan elementni
// chiqaruvchi dastur tuzing.

// test case :
// input :  {45, 17, 51, 7, 31 , 31 }     output : 31
// input :  {11, 12, 12, 12, 31 , 31 }    output : 12