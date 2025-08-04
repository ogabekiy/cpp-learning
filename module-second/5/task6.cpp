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
    for(int i=0;i<N;i++){
        if(nums[i]>=10 && nums[i] < 100){
            nums[i] += 100;
        }
        cout << nums[i] << " ";
    }

    cout << endl;
    //2
    int cntMusbat=0,cntManfiy=0;
    for(int i=0;i<N;i++){
        if(nums[i] > 0){
            cntMusbat++;
        } else if(nums[i] < 0) {
            cntManfiy++;
        }
    }
    cout << "cntMusbat " << cntMusbat << endl;
    cout << "cntManfiy " << cntManfiy << endl;
    //3

    int cnt = 0;
    for(int i=0;i<N;i++){
        if(nums[i] > nums[0]){
            cnt++;
        }
    }
    cout << "Cnt " << cnt << endl;



    return 0;
}


// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Barcha 2 xonali elementlarni qiymatini 100 ga oshiring.

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Musbat va Manfiy elementlarini miqdorini aniqlang.

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. 1 chi elementidan kichik bo‘lgan elementlarni miqdorini aniqlang.