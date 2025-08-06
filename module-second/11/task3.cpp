#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isTub(int a){
    int cnt = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            cnt++;
        }
    }
    return cnt==2;
}

int main(){

    vector<int> arr= {45, 17, 51, 7, 31 } ;
    vector<int> res = {};
    for(int i=0;i<arr.size();i++){
        if(isTub(arr[i])){
            res.push_back(arr[i]);
        }
    }   
    sort(res.begin(),res.end()) ;
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }

    return 0;
}

// 1 o'lchamli massive berilgan. Shu massivedagi tub sonlarni boshqa 
// massivega o'sish tartibda jo'ylab bering;
// test case :
// input :  {45, 17, 51, 7, 31 }    output : {7 , 17 , 31}