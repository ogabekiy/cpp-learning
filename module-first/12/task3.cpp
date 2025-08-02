#include <iostream>

using namespace std;


int main(){ 
    //1
    int a,s=0;
    while(true){
    cin >> a;
    if(a==0) break;
    s++;
    }

    cout << s << endl;

    //2
//     int a,s=0;
//   while(true){
//     cin >> a;
//     if(a==0) break;
//     if(a>10) s++;
//   }

//   cout << s << endl;



    return 0;
}

// 1. Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning nechta ekanini toping. Sanoqda 0 raqami hisobga olinmasin. 

// 2. Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning 10 dan kattalarini sonini toping. 

// Barchasi while operatori yordamida bajarilsin !