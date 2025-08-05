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
    for(int i=0;i<m;i+=2){
        for(int j=0;j < n;j++){
            cout << arr[i][j] << " ";
        }   
        cout << endl;
    }
    //2
    // for(int i=0;i<m;i++){
    //     for(int j=1;j < n;j+=1){
    //         cout << arr[i][j] << " ";
    //     }   
    //     cout << endl;
    // }


    //3
    int k=3,sum=0,kopaytma=1;
    for(int i=0;i<m;i++){
        sum += arr[i][k];
        kopaytma *= arr[i][k];
    }
    cout <<"kopaytma " << kopaytma << endl;
    cout << "yigindi " << sum << endl;

    return 0;
}



// 1.  m x n o'lchamli matritsa berilgan. Matritsaning 2 ga karrali (0, 2, 4, ... ) qatorlarini chiqaruvchi programma tuzilsin. Shart operatori ishlatilmasin.

// 2.  m x n o'lchamli matritsa berilgan. Matritsaning toq indeksli (1, 3, 5, ...) ustunlarini chiqaruvchi programma tuzilsin. Shart operatori ishlatilmasin.

// 3. mxn o'lchamli matritsa va k soni berilgan (0 <= k <n). Matritsaning k-ustuni elementlari yig'indisini va ko'paytmasini chiqaruvchi programma tuzilsin.