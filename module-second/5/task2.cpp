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
    int cnt = 0;
    for(int i=0;i<N;i++){
        if(nums[i]%3==0 && nums[i]%7==0){
            cnt++;
        }
    }
    cout << cnt << endl;

    //2
    // int cnt=0,s=0;
    // for(int i=0;i<N;i++){
    //     if(nums[i]>10 && nums[i] < 100 && nums[i]%2==1){
    //         cnt++;
    //         s += nums[i];
    //     }
    // }
    // cout << "Sum " << s << endl;
    // cout << "Cnt " << cnt << endl;

    //3
    // int a = nums[0];
    // nums[0] = nums[N-1];
    // nums[N-1] = a;
    // for(int i=0;i<N;i++){
    //     cout << nums[i] << " ";
    // }




    return 0;
}

// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. 3 ga va 7 ga karrali elementlarini miqdorini toping.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. 2 xonali toq elementlarini miqdorini va yig‘indisini toping.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. 1 chi va oxirgi elementlarini almashtiring va ekranga massiveni chiqaring.