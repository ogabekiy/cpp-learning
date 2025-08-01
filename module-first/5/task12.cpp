#include <iostream>
using namespace std;

int main() {
    float X, Y;
    int A, B;

    cout << "Konfet (kg) ni kiriting (X): ";
    cin >> X;

    cout << "Shokolad (kg) ni kiriting (Y): ";
    cin >> Y;

    cout << "X kg konfet narxi (so'mda) ni kiriting (A): ";
    cin >> A;

    cout << "Y kg shokolad narxi (so'mda) ni kiriting (B): ";
    cin >> B;

    float konfetNarxi = A / X;
    float shokoladNarxi = B / Y;

    float farq = shokoladNarxi - konfetNarxi;

    cout << "1 kg shokolad 1 kg konfetdan " << farq << " so'mga qimmat turadi." << endl;

    return 0;
}
