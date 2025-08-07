#include <iostream>
using namespace std;

bool isConsonant(char c) {
    c = tolower(c);

    return (c >= 'a' && c <= 'z') && 
           c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
}

int countConsonants(string str) {
    int count = 0;
    for (char c : str) {
        if (isConsonant(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string str="ogabek which one";
    // cout << "Satr kiriting: ";
    // getline(cin, str);

    int result = countConsonants(str);
    cout << "Undosh harflar soni: " << result << endl;

    return 0;
}
