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
    if(nums[0]%2==0 && nums[1]%2==0 && nums[N-1]%2==1 && nums[N-2]%2==1){
        cout << "true" << endl;
    } else{ cout << "false" << endl;}

    //2
    int min = nums[0];
    for(int i=0;i<N;i++){
        if(nums[i]<min){
            min = nums[i];
        }
    }
    cout << "min " << min << endl;

    //3
    int max = nums[0];
    for(int i=0;i<N;i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }
    cout << "max " << max << endl;
    cout << "yigindi "<<max+min  << endl;





    return 0;
}



// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar dastlabki 2 ta elementni juft va oxirgi 2 ta elementi toq bo‘lsa true aks holda false chiqaring

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Eng kichik elementini aniqlang.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Eng katta va eng kichik elementini yig‘indisini aniqlang.