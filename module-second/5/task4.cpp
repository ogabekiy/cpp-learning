#include <iostream>
#include <ctime>

using namespace std;
int getRandomNumber(){
    return rand()%120 + 1;
}


int main(){
    srand(time(0));

    int N=9;
    int nums[N]={};
    // cin >> N;
    for(int i=0;i<N;i++){
        nums[i] = getRandomNumber();
        cout << nums[i] << " ";
    }
    cout << endl;

    //1
    for(int i=0;i<N;i++){
        if(nums[i]%2==0){
            nums[i] = nums[i]*3;
        }
    }

    //2
    // int cnt = 0;
    // for(int i=0;i<N;i++){
    //     if(nums[i]%5==0){
    //         cnt++;
    //     }
    // }
    // if(N==cnt) cout << "true" << endl;
    // else cout << "false" << endl;

    //3
    // if((nums[0] >= 10 && nums[0] < 100) && (nums[1] >= 10 && nums[1] < 100) && (nums[2] >= 10 && nums[2] < 100)){
    //     cout << "true" << endl;
    // } else {cout << "false" << endl;}

    

    return 0;
}

// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Juft elementlarini 3 barobarga oshiring.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar hamma elementi 5 ga karrali bo‘lsa true aks holda false chiqaring.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar dastlabki 3 ta elementi 2 xonali bo‘lsa true aks holda false chiqaring.