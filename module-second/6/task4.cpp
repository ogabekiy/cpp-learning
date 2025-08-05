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
    for(int i=0;i<m;i++){
        int sumOdds = 0;
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==1) sumOdds +=arr[i][j];
        }
        cout << i << " " << sumOdds << endl;
    }
    
    //2
    cout <<"2. " << endl;
    for(int i=0;i<m;i++){
        int maxLine = 0;
        for(int j=0;j<n;j++){
            if(arr[i][j] > maxLine) maxLine =arr[i][j];
        }
        cout << i << " " << maxLine << endl;
    }
    //3
    int k=2;
    int kopayma = 1;
    for(int i=0;i<n;i++){
        kopayma *= arr[k][i];
    }
    cout << "kopayma: " << kopayma << endl;



    return 0;
}


// 1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi toq elementlar yig'indisini aniqlab bering.

// 2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi eng katta elementlarni ekranga chiqarib bering.

// 3. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi elementlar ko'paytmasini aniqlab bering.