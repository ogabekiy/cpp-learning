#include <iostream>
#include <ctype.h>

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
    int sum = 0;
    for(int i=0;i<N;i++){
        sum += nums[i];
    }
    cout <<"sum " << sum << endl;

    //2
    int a = nums[0];
    int b = nums[1];
    for(int i=0;i<N-1;i++){
        if(nums[i] + nums[i+1] > a + b){
            a = nums[i];
            b = nums[i+1];
        }
    }
    cout << "a " << a << endl;
    cout << "b " << b << endl;

    //3
    for(int i=1;i<N;i++){
        if(nums[i] > nums[i-1]){
            cout << nums[i] << " ";
        }
    }





    return 0;
}


// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Elementlar yig‘indisini aniqlang

// 2. n ta elementdan tashkil topgan massiv berilgan. Massiv elementlari orasidan yig'indisi eng katta bo'ladigan 2 ta qo'shni 
// elementni chiqaruvchi  programma tuzilsin.

// 3. n ta elementdan tashkil topgan massiv berilgan. Massiv elementlari orasidan chap qo'shnisidan katta bo'lganlar sonini chiqaruvchi programma tuzilsin.