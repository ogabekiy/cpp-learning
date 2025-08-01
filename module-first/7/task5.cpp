#include <iostream>


using namespace std;



int main(){ 

    int son1=19,son2=23;

    // cin >> son1;
    // cin >> son2;
    // 1

//     if(son1 %2 ==0 && son2%2==0){
//         cout << son1 + son2 << endl;
// } else{
//     cout << son1 * son2 << endl;
// }   

    // 2

//     if(son1%2!=0 && son2%2!=0){
//         cout << son1 + son2 << endl;
// }   else {
//     cout << son1 << endl;
//     cout << son2 << endl;
// }   

    // 3

        int son3=3;

        // cin >> son3;

    int nechta = 0;

    if(son1%2==1){
        nechta++;
    } 
    if(son2%2==1){
        nechta++;
    }
    if(son3%2==1){
        nechta++;
    }

    cout << nechta <<endl;







    return 0;
}





// 1. 2 ta son berilgan. Agar 2 lasi ham juft bo'lsa yig'indisini, aks holda ko'paytmasini aniqlab ekranga chiqaruvchi dastur tuzing.

// 2. 2 ta son berilgan. Agar 2 lasi ham toq bo'lsa ko'paytmasini, aks holda berilgan sonlarni ekranga chiqaruvchi dastur tuzing.

// 3. 3 ta son berilgan. Shu sonlar ichida nechta toq son borligini aniqlovchi dastur tuzing.