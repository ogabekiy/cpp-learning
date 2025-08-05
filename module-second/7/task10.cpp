#include <iostream>
#include <vector>


using namespace std;

bool linearIn(vector<int> a,vector<int> b){
    int cnt=0;
    for(int i=0;i<b.size();i++){
        for(int j= 0;j< a.size();j++){
            if(b[i] == a[j]){
                cnt++;
            }
        }
    }
    return cnt == b.size();
}


int main(){

    vector<int> a = {1,2,4,6};
    vector<int> b = {2,4};

    cout << boolalpha << linearIn(a,b);

    return 0;
}


// Funksiya nomi : linearIn
// 2ta int tipida a va b massiv berilgan. b massivdagi barcha son a massivida uchrasa true qaytaring.

// linearIn([1, 2, 4, 6], [2, 4]) → true
// linearIn([1, 2, 4, 6], [2, 3, 4]) → false
// linearIn([1, 2, 4, 4, 6], [2, 4]) → true