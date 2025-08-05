#include <iostream>

using namespace std;


int main(){

    // matrix arraylar

    int arr1[2][2] = { {1,2},
                       {3,4} };
    cout << arr1[0][1] << endl;
    swap(arr1[0][0],arr1[0][1]);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}