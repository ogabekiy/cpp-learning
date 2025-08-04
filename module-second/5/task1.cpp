#include <iostream>


using namespace std;


int main(){

    //1
    int nums[] = {123,23,123,125};
    int l = sizeof(nums)/sizeof(nums[0]);
    int cnt=0;
    for(int i=0;i<l;i++){
        if(nums[i] >=100 && nums[i] <1000){
            cnt++;
        }
    }
    cout << cnt << endl;

    //2
    // int nums[] = {123,23,123,125,4};
    // int l = sizeof(nums)/sizeof(nums[0]);
    // int cnt=0;
    // for(int i=0;i<l;i++){
    //     if(nums[i]%2==0){
    //         cnt++;
    //     }
    // }
    // cout << cnt << endl;

    //3
    // int nums[] = {123,23,123,125};
    // int l = sizeof(nums)/sizeof(nums[0]);
    // int s=0;
    // for(int i=0;i<l;i++){
    //     if(nums[i]%2==1){
    //         s+=nums[i];
    //     }
    // }
    // cout << s << endl;


    return 0;
}


// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. 3 xonali elementlarini miqdorini toping.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Juft elementlarini miqdorini toping.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Toq elementlarini yig‘indisini toping.