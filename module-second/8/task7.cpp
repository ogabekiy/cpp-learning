#include <iostream>

using namespace std;

string middleThree(string str){
    int l = str.length();
    string res = str.substr((l/2)-1,l/2+1);
    return res;
}

int main(){ 


    cout << middleThree("Candy") << endl;



    return 0;
}