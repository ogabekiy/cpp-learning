#include <iostream>
#include <vector>

using namespace std;


bool isEverywhere(vector<int> vec,int n){
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]!=n && vec[i+1] != n){
            return false;
        }
    }
    return true;
}

int main(){

    vector<int> arr = {1,2,1,3};
    vector<int> arr1 = {1,2,1,3};
    vector<int> arr2 = {1,2,1,3,4};

    cout <<boolalpha<< isEverywhere(arr,1) << endl;
    cout <<boolalpha<< isEverywhere(arr,2) << endl;
    cout <<boolalpha<< isEverywhere(arr2,1) << endl;




    return 0;
}


// Funksiya nomi : isEverywhere
// int tipida massiv va n soni berilgan. Agar massivdagi barcha qo’shni-qo’shni juft elementlardan 1tasi n soniga teng bolsa, true qaytaring.

// isEverywhere([1, 2, 1, 3], 1) → true
// isEverywhere([1, 2, 1, 3], 2) → false
// isEverywhere([1, 2, 1, 3, 4], 1) → false