#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverse3(vector<int> vec){
    reverse(vec.begin(),vec.end());
    return vec;
}

int main(){

    vector<int> arr1 = {1,2,3};
    // vector<int> arr1 = {5,11,9};
    // vector<int> arr1 = {7,0,0};

    vector<int> res = reverse3(arr1);
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }


    return 0;
}


// Funksiya nomi : reverse3
// int tipida uzunligi 3 bolgan massiv berilgan. Massivni teskari qilib (aylantirib) qaytaring.

// reverse3([1, 2, 3]) → [3, 2, 1]
// reverse3([5, 11, 9]) → [9, 11, 5]
// reverse3([7, 0, 0]) → [0, 0, 7]