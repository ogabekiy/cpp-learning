#include <iostream>
using namespace std;

string wordEnds(string str, string word) {
    string res = "";
    int wordLen = word.length();

    for (int i = 0; i <= str.length() - wordLen; i++) {
        if (str.substr(i, wordLen) == word) {
            if (i > 0) {
                res += str[i - 1];
            }
            if (i + wordLen < str.length()) {
                res += str[i + wordLen];
            }
        }
    }

    return res;
}

int main() {
    cout << wordEnds("abcXY123XYijk", "XY") << endl;  
    cout << wordEnds("XY123XY", "XY") << endl;       
    cout << wordEnds("XY1XY", "XY") << endl;          

    return 0;
}
