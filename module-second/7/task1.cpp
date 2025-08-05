#include <iostream>
#include <vector>


using namespace std;

bool firstLast6(vector<int> vec){
    if(vec[0]==6 || vec[vec.size()-1]==6){
        return true;
    }
    return false;
}

int main(){

    vector<int> arr1 = {1,2,6};
    vector<int> arr2 = {6,1,2,3};
    vector<int> arr3 = {13,6,1,2,3};

    cout << boolalpha << firstLast6(arr1) << endl;
    cout << boolalpha << firstLast6(arr2) << endl;
    cout << boolalpha << firstLast6(arr3) << endl;

    return 0;
}

// Funksiya nomi : firstLast6
// int turidagi elementlardan iborat massiv berilgan. Massivni birinchi yoki oxirgi elementi 6 bo'lsa, true qaytaruvchi funksiya tuzing.

// firstLast6([1, 2, 6]) → true
// firstLast6([6, 1, 2, 3]) → true
// firstLast6([13, 6, 1, 2, 3]) → false