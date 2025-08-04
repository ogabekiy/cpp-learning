#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int getRandomNumber(){
    return rand()%90+1;
}
int main(){
    srand(time(0));

    int N=9;
    int a[N]={};
    // cin >> N;
    for(int i=0;i<N;i++){
        a[i] = getRandomNumber();
        cout << a[i] << " ";
    }
    cout << endl;
    //1
    int b[N]={};
    for(int i=0;i<N;i++){
        b[i] = getRandomNumber();
        cout << b[i] << " ";
    }
    cout << endl;

    int c[N]={};

    for(int i=0;i<N;i++){
        c[i] = max(a[i],b[i]);
        cout << c[i] << " ";
    }

    //2
    int res[N] = {};
    int cnt = 0;
    for(int i=0;i < N;i++){
        if(a[i]%2==0){
            res[cnt] = a[i];
            cnt++;
        }
    }
    cout << endl;
    int l = sizeof(res)/sizeof(res[0]);
    cout << "l " << l << endl;
    for(int i=0;i<l;i++){
        cout << res[i] <<" ";
    }


    




    return 0;
}


// 1.n ta elementdan tashkil topgan a va b massiv berilgan. c massivni hosil qiling. c[i] = max(a[i], b[i]), ya'ni c massivning i-elementi a va b massivlarning i-elementlaridan kattasini qabul qilsin.

// 2.n ta elementdan iborat butun sonlardan tashkil topgan a massiv berilgan. a massivning juft elementlaridan tashkil topgan b massivini hosil qiling. b massiv elementlari soni va elementlari chiqarilsin.
