#include <iostream>


using namespace std;


int main(){

    //1
    cout << "1." << endl;
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i == n){
                cout << "* ";
            }
        }
        
        cout << endl;
    }

    cout << endl;
    cout << "2." << endl;
    //2

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i == n){
                cout << "* ";
            } else {
                if(j==1 || j==n){
                    cout << "* ";
                } else{
                    cout << "  ";
                }
            }
        }
        
        cout << endl;
    }




    return 0;
}

// 11-vazifa

// 1. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
// test case 
// input : n = 5
// output :
// * * * * *



// * * * * *

// 2. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
// test case 
// input : n = 5
// output :
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// Barchasi for operatori yordamida bajarilsin !