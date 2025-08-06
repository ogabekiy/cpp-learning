#include <iostream>
using namespace std;

bool catDog(string str) {
    int cntCat = 0;
    int cntDog = 0;
    
    for (int i = 0; i <= str.length() - 3; i++) {
        if (str.substr(i, 3) == "cat") {
            cntCat++;
            i += 2; 
        } else if (str.substr(i, 3) == "dog") {
            cntDog++;
            i += 2;
        }
    }

    return cntCat == cntDog;
}

int main() {
    cout << boolalpha << catDog("catdog") << endl;         
    cout << boolalpha << catDog("catcat") << endl;         
    cout << boolalpha << catDog("1cat1cadodog") << endl;   

    return 0;
}
