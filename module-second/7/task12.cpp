#include <iostream>
#include <vector>

using namespace std;

vector<int> seriesUp(int n) {
    vector<int> res;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            res.push_back(j);
        }
    }
    return res;
}

int main() {
    int n = 5;
    vector<int> result = seriesUp(n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
