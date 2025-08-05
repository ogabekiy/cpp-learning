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
    int cntOddInLastLine = 0;
    for(int i=0;i<n;i++){
        if(arr[m-1][i]%2==0) cntOddInLastLine++;
    }
    cout << "cntOddInLastLine " << cntOddInLastLine << endl;
    //2
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==2){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    //3

    int max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << "Max: " << max << endl;


    return 0;
}


// 1. m x n o'lchamli matritsa berilgan. Matritsadagi oxirgi qatordagi juft elementlarni miqdorini aniqlang.

// 2. m x n o'lchamli matritsa berilgan. Matritsadagi birinchi va 3 chi qatorlarini ekranga chiqarib bering.

// 3. m x n o'lchamli matritsa berilgan. Matritsadagi eng katta elementni ekranga chiqarib bering.