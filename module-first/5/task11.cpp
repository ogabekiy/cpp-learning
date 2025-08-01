#include <iostream>
using namespace std;

int main() {
    int soat, minut, sekund;

    cout << "Soatni kiriting: ";
    cin >> soat;

    cout << "Minutni kiriting: ";
    cin >> minut;

    cout << "Sekundni kiriting: ";
    cin >> sekund;

    int jami_minut = (soat * 60) + minut + (sekund / 60);

    cout << "Jami minut: " << jami_minut << endl;

    return 0;
}
