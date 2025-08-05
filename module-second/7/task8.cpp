#include <iostream>
#include <vector>

using namespace std;

int matchup(vector<int> a,vector<int> b){

    int cnt=0;
    for(int i=0;i<a.size();i++){
        if((a[i] == b[i]+1) || (a[i] == b[i]+2) || (a[i] == b[i]-1) || (a[i] == b[i]-2)){
            cnt++;
        }
    }
    return cnt;


}

int main(){

    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,3,10};

    cout << matchup(arr1,arr2) << endl;

    return 0;
}



// Funksiya nomi : matchup
// int tipida teng uzunlikda 2ta a va b massivlar berilgan. a massivni n-inchi indeksidagi element b massivni n-inchi indeksidagi elementdan 1taga yoki 2taga farq qiladiganlarni sonini toping.

// matchUp([1, 2, 3], [2, 3, 10]) → 2
// matchUp([1, 2, 3], [2, 3, 5]) → 3
// matchUp([1, 2, 3], [2, 3, 3]) → 2