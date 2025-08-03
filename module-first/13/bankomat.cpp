#include <iostream>

using namespace std;

int main() {
  
  double money=500,newMoney;
  string password="0000";
  string newPassword;
  string newPassword1;
  string newPassword2;
  string phoneNumber;
  int choice;

  int cnt=0;
  while(true){
    cout << "Enter password: "; cin >> newPassword;
    if(password == newPassword){
      while(true){
        cout << "1. Cash withdrawal \n";
        cout << "2. View funds \n";
        cout << "3. Renew password \n";
        cout << "4. View password \n";
        cout << "5. Integrate with SMS \n";
        cout << "6. Exit \n";
        cout << "Choose option: ";cin >> choice;
        switch(choice){
          case 1: 
              cout << "Enter amount of money: "; cin >> newMoney;
              if(money > newMoney && newMoney > 0){
                money = money - newMoney;
                cout << "Money was withdrawn \n";
              } else{
                cout << "Error occured \n";
              }
            break;
          case 2:
            cout << "Your fund: " << money << endl;
            break;
          case 3:
            cout << "Enter password: ";cin >> newPassword1;
            cout << "Enter new password"; cin >> newPassword1;
            cout << "Reenter new password"; cin >> newPassword2;
            if(password == newPassword && newPassword1 == newPassword2){
              password = newPassword1;
              cout << "Password is succesfully set" << endl; 
            }
            break;
          case 4: 
            cout << "Password: " << password << endl;
            break;
          case 5: 
            cout << "Enter phone number: "; cin >> phoneNumber;
            cout << "Sms is succesfully integrated \n"; break;
          case 6:
              cout << "You are done, Thanks!!!" ; return 0;
          default: 
             cout << "  ERROR  !!!" << endl;
             return 0;
        }  
          
      }
    }
    else{
      cnt++;
      if(cnt==3){
        cout << "Cars is blocked!!!" << endl; return 0;
      } else{
        cout << "Password is wrong,Pls try again!!\n";
      }
    }
  }
  
  
  

  return 0;
}