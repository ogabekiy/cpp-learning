#include <iostream>
#include <ctime>

using namespace std;
int getRandomNumber(){
    return rand()%10 + 1;
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
    cout << endl;

    //1
    int k=2;
    for(int i=0;i<m;i++){
        arr[i][2] = arr[i][2] * 2;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    //2
    for(int i=0;i<m;i++){
        arr[2][i] = arr[2][i] * 3;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //3
    for(int i=0;i<m;i++){
        arr[i][2] = arr[i][2]  + 20;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}


// 1. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi elementlarni 2 barobarga oshirib ekranga massive chiqarib bering.

// 2. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi elementlarni 3 barobarga oshirib ekranga massive chiqarib bering.

// 3. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi elementlarni 20 ga oshirib ekranga massive chiqarib bering.