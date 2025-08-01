#include <iostream>


using namespace std;


int main(){
    //1
    int a=28;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            cout << i << endl;
        }
    }   
    //2
    int son = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            son++;
        }
    }   
    cout << son << endl;

    //3
    int sum=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            sum+=i;
        }
    }   
    cout << "yigindi " << sum << endl;



    return 0;
}


// 1. a soni berilgan. Shu sonni bo'luvchilarini chiqaring.

// 2. a soni berilgan. Shu sonni bo'luvchilarini miqdorini chiqaring.

// 3. a soni berilgan. Shu sonni bo'luvchilarini yig'indisini chiqaring.