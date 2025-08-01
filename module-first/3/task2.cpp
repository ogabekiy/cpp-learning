#include <iostream>
using namespace std;

int main() {
    int son1 = 2;
    int son2 = 3;

    cout << "1. 10 ga oshirilgan son: " << son1 + 10 << endl;

    cout << "2. 10 ga kamaytirilgan son: " << son1 - 10 << endl;

    cout << "3. 10 marta oshirilgan son: " << son1 * 10 << endl;

    int kvadrat = son1 * son1;
    cout << "4. Sonning kvadrati: " << kvadrat << endl;

    int kub = son1 * son1 * son1;
    cout << "5. Sonning kubi: " << kub << endl;

    int daraja5 = son1 * son1 * son1 * son1 * son1;
    cout << "6. Sonning 5-darajasi: " << daraja5 << endl;

    cout << "7. Sonlar yig'indisi: " << son1 + son2 << endl;

    cout << "8. Sonlar ko'paytmasi: " << son1 * son2 << endl;

    return 0;
}
