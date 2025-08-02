#include <iostream>

using namespace std;

int main(){
    //1
    int a,s=0;
    while(true){
        cin >> a;
        if(a==0) break;
        if(a>50) s+=a;
    }

    cout << s << endl;

    //2
    // int a,s=0;
    // while(true){
    //     cin >> a;
    //     if(a%2==0) break;
    //     s++;
    // }

    // cout << s << endl;



    return 0;
}


// 1. Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning 50 dan kattalarini yig'indisini toping. 

// 2. Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon juft son kiritilguncha davom etadi. Shu kiritilgan sonlarning miqdorini toping.

// Barchasi while operatori yordamida bajarilsin !