#include <iostream>
#include <vector>

using namespace std;

bool either(vector<int> vec){
    int cnt=0;
    for( int i=0;i<vec.size();i++){
        if((vec[i]==2 && vec[i+1] ==2) || (vec[i]==4 && vec[i+1] ==4)) cnt++;
    }   
    return cnt==1;
}


int main(){

    vector<int> arr = {1,2,2};
    vector<int> arr1 = {4,4,1};
    vector<int> arr2 = {4,4,1,2,2};

    cout << boolalpha << either(arr) << endl;
    cout << boolalpha << either(arr1) << endl;
    cout << boolalpha << either(arr2) << endl;


    return 0;
}


// Funksiya nomi : either24
// int tipida massiv berilgan. Agar massivda 2 sonidan 1ta keyin 2 soni kelsa yoki 4 sonidan 1ta keyin 4 kelsa, hamda shu ikki shart 1 vaqtda bajarmasa, true qaytaring.

// either24([1, 2, 2]) → true
// either24([4, 4, 1]) → true
// either24([4, 4, 1, 2, 2]) → false