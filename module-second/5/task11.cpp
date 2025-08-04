#include <iostream>
#include <ctime>

using namespace std;
int getRandomNumber(){
    return rand()%90+1;
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

    int firstJuft = 0;
    //1
    for(int i=0;i<N;i++){
        if(nums[i]%2==0){
            firstJuft = nums[i]; break;
        }
    }
    cout << "firstJuft " << firstJuft << endl;
    for(int i = 0;i<N;i++){
        if(nums[i]%2==0 && nums[i]!= firstJuft){
            nums[i] += firstJuft;
        }
        cout << nums[i] << " ";
    }
    //2
    int lastOdd = 0;
    for(int i=N-1;i>=0;i--){
        if(nums[i]%2==1){
            lastOdd = nums[i]; break;
        }
    }
    cout << endl;
    cout << "lastOdd " << lastOdd << endl;
    for(int i = 0;i<N;i++){
        if(nums[i]%2==1 && nums[i]!= lastOdd){
            nums[i] += lastOdd;
        }
        cout << nums[i] << " ";
    }


    cout << endl;
    //3
    int min = nums[0];
    for(int i=0;i<N;i+=2){
        if(min > nums[i]){
            min = nums[i];
        }
    }
    cout << "Min " << min << endl; 








    return 0;;
}


// 1. n ta butun sonlardan iborat massiv berilgan. Massivdagi har bir juft sonni birinchi uchragan juft songa orttiruvchi programma tuzilsin.

// 2. n ta butun sonlardan iborat massiv berilgan. Massivdagi har bir toq sonni oxirgi toq songa orttiruvchi programma tuzilsin.

// 3. n ta elementdan tashkil topgan massiv berilgan. Massivning juft indeksli elementlari orasidan kichigini aniqlovchi programma tuzilsin. min(a0, a2, a4, ...)