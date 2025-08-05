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
    int min = arr[0][0];
    int i1=0,j1=0;
    for(int i=0;i< m;i++){
        for(int j=0;j<n;j++){
            if(min > arr[i][j]){
                min = arr[i][j];
                i1=i;
                j1=j;
            }
        }
    }
    cout <<"I1: " << i1 << endl;
    cout <<"j1: " << j1 << endl;
    //2
    for(int i=0;i<m;i++){
        int sumQator = 0;
        for(int j=0;j<n;j++){
            sumQator += arr[i][j];
        }
        cout << i << " " << sumQator << endl;
    }
    //3
    for(int i=0;i<m;i++){
        int cntOdds = 0;
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==1) cntOdds ++;
        }
        cout << i << " " << cntOdds << endl;
    }



    return 0;
}


// 1. m x n o'lchamli matritsa berilgan. Matritsadagi eng kichik elementni indexlarini ekranga chiqarib bering.

// 2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi elementlar yig'indisini aniqlab bering.

// 3. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi toq elementlar miqdorini aniqlab bering.