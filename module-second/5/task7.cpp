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
    int s = 0;
    for(int i=0;i<N;i++){
        if(nums[i] > nums[N-1]){
            s += nums[i];
        }
    }
    cout << "S " << s << endl;

    //2
    int cnt = 0;
    for(int i=0;i<N;i++){
        if(nums[i]%3==0 || nums[i]%4==0){
            cnt++;
        }
    }
    if(cnt==N) cout << "hello" << endl;
    else cout << "salom" << endl;



    return 0;
}

// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Oxirgi elementida katta bo‘lgan elementlarni yig‘indisini aniqlang.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar barcha elementni 4 ga yoki 3 ga karrali bo‘lsa "hello" aks holda "salom" ni chiqaring.