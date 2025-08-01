#include <iostream>

using namespace std;

int main(){


    int a = 473;

    int birlar = a%10;

    int son = (a - birlar)/10;

    int yangiSon = birlar * 100 + son;

    cout << yangiSon << endl;


    return 0;
}