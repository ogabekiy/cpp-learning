#include <iostream>
#include <ctime>
using namespace std;

int getRandomNumber(){
    int n = rand()%10 + 1;
    return n;
}

bool istub(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }

    return cnt == 2;
}

int main(){
    srand(time(0));


    int M=5,N=4;
    int arr[M][N];
    int minSon = 123456;
    for(int i=0; i< M;i++){
        for(int j=0;j < N;j++){
            arr[i][j] = getRandomNumber();
            if(minSon > arr[i][j]){
                minSon = arr[i][j];
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Min: " << minSon << endl;

    for(int i=0;i<M;i++){
        for(int j=0;j < N;j++){
            if(istub(arr[i][j])){
                arr[i][j] += minSon;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }








    return 0;
}