#include <iostream>


using namespace std;


int main(){
    int son = 1234;

    int birlar = son%10;
    int onlar = (son/10)%10;
    int yuzlar = (son/100)%10;
    int minglar = (son/1000)%10;

    int sum=0;
    if(birlar%2==0){
        sum++;
    }
    if(onlar%2==0){
        sum++;
    }
    if(yuzlar%2==0){
        sum++;
    }
    if(minglar%2==0){
        sum++;
    }

    cout << sum << endl;


    return 0;
}



// 1. 1 ta 4 xonali son berilgan. Shu son tarkibidagi juft raqamlar miqdorini aniqlang.

// 2. 5 ta son berilgan. Shu sonlar ichida nechta juft son borligini aniqlovchi dastur tuzing.

// 3. 5 ta son berilgan. Shu sonlar ichida nechta musbat son borligini aniqlovchi dastur tuzing.