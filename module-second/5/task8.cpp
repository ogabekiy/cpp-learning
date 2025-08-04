#include <iostream>
#include <ctime>

using namespace std;
int getRandomNumber(){
    return 20 - rand()%30;
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
    // int c=0;
    // for(int i=0;i<N;i++){
    //     if(nums[i] < nums[i+1]){
    //         c++;
    //     }
    // }
    // if(c == N-2){
    //     cout << "true" << endl;
    // } else{ cout << "false" << endl;}


    //2
    // int c=0;
    // for(int i=0;i<N;i++){
    //     if(nums[i] > nums[i+1]){
    //         c++;
    //     }
    // }
    // if(c == N-2){
    //     cout << "true" << endl;
    // } else{ cout << "false" << endl;}

    //3
    int max=nums[0];
    int min = nums[0];
    for(int i=0;i<N;i++){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
    }
    for(int i=0;i<N;i++){
        if(nums[i]==max){
            nums[i] = min;
        }
        else if(nums[i]==min){
            nums[i] = max;
        }
    }

    for(int i=0;i<N;i++){
        cout << nums[i] << " ";
    }



    return 0;
}


// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar elementlari o‘suvchi bo‘lsa true aks holda false chiqaring.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar elementlari kamayuvchi bo‘lsa true aks holda false chiqaring.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Eng katta elementi bilan eng kichik elementini joyini almashtiring. Va massiveni chiqaring.