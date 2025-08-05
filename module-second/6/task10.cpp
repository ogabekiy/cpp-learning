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
    for( int i = 0 ; i < n ; i++ )
    {
        int minSon = arr[0][0];
        for( int j = 0 ; j < m; j++ )
        {
            if( arr[j][i] < minSon ) minSon = arr[j][i];
        }
        cout << i << " : " << minSon << endl;
    }


    //2
    for(int i=0;i<m;i++){
        int minSon = arr[0][0];
        for(int j=0;j<n;j++){
            if(minSon > arr[i][j]){
                minSon = arr[i][j];
            }
        }
                cout << i << " : " << minSon << endl;

    }

    //3
    int cnt=0;
    for(int i=0;i<m;i++){
        int xa = 0;
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0){
                xa++;
            }
        }
        if(xa==n){
            cnt++;
        }
    }
    cout << "cnt: " << cnt << endl;


    return 0;
}


// 1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi eng kichik elementlararini ekranga chiqaring.

// 2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi eng kichik elementlararini ekranga chiqaring.

// 3. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementi juft bo'lgan qatorlarni miqdorini aniqlang.