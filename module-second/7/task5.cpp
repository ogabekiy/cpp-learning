#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool only14(vector<int> vec){
    int cnt=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==1 || vec[i]==4){
            cnt++;
        }
    }
    if(cnt==vec.size()) return true;
    return false;
}

int main(){

    vector<int> arr = {1,4,1,4};

    cout << boolalpha << only14(arr) << endl;



    return 0;
}



// Funksiya nomi : only14
// int tipida massiv berilgan. Agar massivdagi har bitta element 1 yoki 4 bolsa true qaytaring.

// only14([1, 4, 1, 4]) → true
// only14([1, 4, 2, 4]) → false
// only14([1, 1]) → true