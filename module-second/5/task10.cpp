#include <iostream>
#include <ctime>
#include <ctype.h>
using namespace std;
int getRandomNumber(){
    return 20 - rand()%30;
}

bool isUpperAll(string str){
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            cnt++;
        }
    }
    return cnt==str.length();
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
    int others[N] = {};
    cout << "others:  ";
    for (int i = 0; i < N; i++) {
        others[i] = getRandomNumber();
        cout << others[i] << " ";
    }
    cout << endl;

    int res[N] = {};
    for(int i=0;i<N;i++){
        res[i] = nums[i] * others[i];
        cout << res[i] << " ";
    }
    
    cout << endl;
    //2
    int n=5;
    string arr[n] = {"$savage","$xa","XA","WHY","$borbolsin"};
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i][0] == '$'){
            cnt++;
    }
    }
    cout << "Cnt " << cnt << endl;

    //3
    for(int i=0;i<n;i++){
        if(isUpperAll(arr[i])){
            cout << arr[i] << " ";
        }
    }


    return 0;
}


// 1. n ta elementdan tashkil topgan 2 ta massiv berilgan. Massiveni mos elementlar ko'paytmasidan tashkil topgan yangi massive hosil qiling va ekranga chiqaring.

// 2. n ta elementdan tashkil topgan string massiv berilgan.'$' bilan boshlanadigan elementlar miqdorini aniqlang.

// 3. n ta elementdan tashkil topgan string massiv berilgan. Hamma belgisi katta harf bo'lgan elementlarini ekranga chiqaruvchi dastur tuzing. 