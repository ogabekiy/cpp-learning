#include <iostream>
#include <ctime>

using namespace std;

int getRandomNumber(){
    return rand()%90 + 1;
}


int main(){
    srand(time(0));

    int m=4,n=5;
    // cin >>m; cin >> n;
    int arr[m][n] = {};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = getRandomNumber();
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //1
    int cntOdd = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==1) cntOdd++;
        }
    }
    cout << "cntOdd: " << cntOdd << endl;
    //2
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0) sum+=arr[i][j];
        }
    }
    cout << "sum: : " << sum << endl;

    //3
    int sumAll = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sumAll+=arr[i][j];
        }
    }
    cout << "sumAll: : " << sumAll << endl;


    return 0;
}


// 1. m x n o'lchamli matritsa berilgan. Matritsadagi toq elementlar miqdorini aniqlang.

// 2. m x n o'lchamli matritsa berilgan. Matritsadagi juft elementlar yig'indisini aniqlang.

// 3. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementlar yig'indisini aniqlang.