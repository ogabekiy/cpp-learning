#include <iostream>
#include <ctime> 

using namespace std;

int getRandomNumber() {
    return rand() % 10 + 1;
}   

int main() {
    srand(time(0));

    int m = 4, n = 5;
    int arr[m][n] = {};

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = getRandomNumber();
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++) { 
        int sum = 0;
        for (int i = 0; i < m; i++) { 
            sum += arr[i][j];
        }
        cout << "Ustun " << j << ": " << sum << endl;
    }

    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i][j] % 2 != 0) count++;
        }
        cout << "Ustun " << j << ": " << count << endl;
    }

    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i][j] % 2 != 0) sum += arr[i][j];
        }
        cout << "Ustun " << j << ": " << sum << endl;
    }

    return 0;
}
