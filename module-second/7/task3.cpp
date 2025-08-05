#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateLeft3(vector<int> vec){
    vec.push_back(vec[0]);
    vec.erase(vec.begin(),vec.begin()+1);
    return vec;
}

int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {5,11,9};
    vector<int> arr3 = {7,0,0};


    vector<int> res = rotateLeft3(arr1);
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }



    return 0;
}


// Funksiya nomi : rotateLeft3
// int tipida uzunligi 3 bolgan massiv berilgan. Massivni birinchi elementini olib oxiriga qoying va natijani qaytaring.

// rotateLeft3([1, 2, 3]) → [2, 3, 1]
// rotateLeft3([5, 11, 9]) → [11, 9, 5]
// rotateLeft3([7, 0, 0]) → [0, 0, 7]