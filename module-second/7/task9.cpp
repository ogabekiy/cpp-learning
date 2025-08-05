#include <iostream>
#include <vector>

using namespace std;

bool canBalance(vector<int> vec) {
    int totalSum = 0;
    for (int num : vec) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < vec.size() - 1; i++) {
        leftSum += vec[i];
        int rightSum = totalSum - leftSum;
        if (leftSum == rightSum) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr1 = {1, 1, 1, 2, 1};
    vector<int> arr2 = {2, 1, 1, 2, 1};
    vector<int> arr3 = {10, 10};
    vector<int> arr4 = {10, 0, 1, -1, 10};

    cout << canBalance(arr1) << endl; 
    cout << canBalance(arr2) << endl; // false
    cout << canBalance(arr3) << endl; // true
    cout << canBalance(arr4) << endl; // true

    return 0;
}
