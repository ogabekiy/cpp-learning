#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool firstLast6(vector<int> vec){
    if(vec[0]==6 || vec[vec.size()-1]==6){
        return true;
    }
    return false;
}
// size() = >length of vector
int main(){


    vector<int> vec1 = {1,2,6};
    vector<int> vec2 = {6,1,2,3};
    vector<int> vec3 = {13,2,6,7};

    cout << firstLast6(vec1) << endl;
    cout << firstLast6(vec2) << endl;
    cout << firstLast6(vec3) << endl;


    return 0;
}