#include <iostream>
#include <vector>

using namespace std;

vector<int> squareUp(int n) {
    vector<int> result(n * n, 0); 
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            result[i * n - j - 1] = j + 1;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> ans = squareUp(n);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
