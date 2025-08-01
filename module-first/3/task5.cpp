#include <iostream>
using namespace std;

int main() {
    int soat = 2; 
    int sekund = soat * 60 * 60;
    cout << "1. " << soat << " soat = " << sekund << " sekund" << endl;

    int kun = 3; 
    int minut = kun * 24 * 60;
    cout << "2. " << kun << " kun = " << minut << " minut" << endl;

    int minut2 = 180; 
    int soat2 = minut2 / 60;
    cout << "3. " << minut2 << " minut = " << soat2 << " soat" << endl;

    int minut3 = 2880; 
    int kun2 = minut3 / (24 * 60);
    cout << "4. " << minut3 << " minut = " << kun2 << " kun" << endl;

    return 0;
}
