#include <iostream>

using namespace std;

int main(){
    //1
    int n=5;
    for(int i = 1; i <= n; i++) {
        for(int space = 1; space < i; space++) {
            cout << "  ";
        }
        for(int star = n; star >= i; star--) {
            cout << " *";
        }
        cout << endl;
    }


    //2
    for(int i=1;i<=n;i++){
        // cout << i << endl;
        for(int j =1;j<=i;j++){
            cout << i ;
        }
        cout << endl;
    }


    

    return 0;
}


// 1. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
// test case 
// input : n = 5
// output :
// * * * * * 
//   * * * *
//     * * *
//       * *
//         *

// 2. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
// test case 
// input : n = 5
// output :
// 1 
// 2 2
// 3 3 3 
// 4 4 4 4
// 5 5 5 5 5
