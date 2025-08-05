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
    int k=2,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[k-1][i]%2==0){
            cnt++;
        }
    }
    cout << k << " qatordagi juft sonlar miqdor: " << cnt << endl;
    //2
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[k-1][i]%2==1){
            sum += arr[k-1][i];
        }
    }
    cout << "Sum: " << sum << endl;


    //3
    int cntJuft = 0;
    for(int i=0;i<n;i++){
        if(arr[m-1][i]%2==0){
            cntJuft++;
        }
    }
    cout << "cntJuft: " << cntJuft << endl;


    return 0;
}


// 1. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi juft elementlar miqdorini aniqlab bering.

// 2. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi toq elementlar yig'indisini aniqlab bering.

// 3. m x n o'lchamli matritsa berilgan. Matritsadagi oxirgi ustundagi juft elementlarni miqdorini aniqlang.