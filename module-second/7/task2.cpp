#include <iostream>
#include <vector>

using namespace std;

bool commonEnd(vector<int> vec1,vector<int> vec2){
    if(vec1[0]== vec2[0] || vec1[vec1.size()-1]==vec2[vec2.size()-1]) return true;
    return false;
}

int main(){

    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {7,3,2};
    vector<int> arr3 = {1,3};


    cout << boolalpha << commonEnd(arr1,{7,3}) << endl;
    cout << boolalpha << commonEnd(arr1,arr2) << endl;
    cout << boolalpha << commonEnd(arr1,arr3) << endl;


    return 0;   
}


// Funksiya nomi : commonEnd
// 2ta int tipida a va b massiv berilgan. Agar ularni birinchi elementlari yoki oxirgi indekslaridagi elementlari teng bolsa, true qaytaring.

// commonEnd([1, 2, 3], [7, 3]) → true
// commonEnd([1, 2, 3], [7, 3, 2]) → false
// commonEnd([1, 2, 3], [1, 3]) → true