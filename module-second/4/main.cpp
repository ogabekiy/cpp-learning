#include <iostream>

using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl; // Output: 120
    return 0;
}