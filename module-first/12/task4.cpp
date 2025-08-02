#include <iostream>

using namespace std;


int main(){

    //1
    int a,s=0;
    while(true){
      cin >> a;
      if(a==0) break;
      s+=a;
    }
    cout << s << endl;

    //2
    int a,s=1;
    while(true){
      cin >> a;
      if(a==0) break;
      s*=a;
    }
    cout << s << endl;




    return 0;
}

// 1. Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning yig'indisni toping.  

// 2. Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning ko'paytmasini toping. Ko’paytmada 0 raqami hisobga olinmasin. 

// Barchasi while operatori yordamida bajarilsin !