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
    int sum = nums[0] + nums[1] + nums[2];
    cout << "Sum: " << sum << endl;

    //2
    
    // int sum = nums[N-1] + nums[N-2] + nums[N-3];
    // cout << "Sum: " << sum << endl;

    //3

    // int cntToq=0,cntjuft=0;
    // for(int i=0;i<N;i++){
    //     if(nums[i]%2==0){
    //         cntjuft++;
    //     } else {
    //         cntToq++;
    //     }
    // }
    // if(cntjuft > cntToq) cout << "false" << endl;
    // else cout << "true" << endl;



    return 0;
}


// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Dastlabki 3 ta elementini yig‘indisini toping.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Oxirgi 3 ta elementini yig‘indisi toping.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Toq elementlar bn Juft elementlarini taqqoslang. Agar toqlari ko‘p bo‘lsa true aks holda false chiqaring.