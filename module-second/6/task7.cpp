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

    //1
    for(int j = 0; j < n; j++ ){
        int MaxSon = arr[0][0];
        for(int i = 0; i < m; i++ ){
            if(arr[i][j] > MaxSon){
                MaxSon =  arr[i][j];
            }
        }
        cout <<j+1<<":" << MaxSon << endl;
    }

    //2
    int k=2,kopaytma=1;
    for(int i=0;i<m;i++){
        kopaytma *= arr[i][k-1];
    }
    cout << "kopaytma "<< kopaytma << endl;



    //3
    for(int i=0;i<m;i++){
        cout << arr[i][k-1] <<" ";
    }




    return 0;
}


// 1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi eng katta elementlarni ekranga chiqarib bering.

// 2. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi elementlar ko'paytmasini aniqlab bering.

// 3. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi elementlarni ekranga chiqarib bering.