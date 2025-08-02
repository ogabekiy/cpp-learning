#include <iostream>

using namespace std;

int main(){

    //1
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j = 1;j <= n;j++){
            cout << i << " ";
        }
        cout << endl;
    }


    //2

    cout << endl;

    for(int i = 1; i <= n; i++) {
        for(int j = 5 - i + 1; j <= 5; j++) {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }


    return 0;
}

// 21. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
// test case 
// input : n = 5
// output :
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// 2. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
// test case 
// input : n = 5
// output :
// 15
// 24 25
// 33 34 35
// 42 43 44 45
// 51 52 53 54 55