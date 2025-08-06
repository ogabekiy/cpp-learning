#include <iostream>
using namespace std;


class Car {
    public:
        string color;
        string name;
        string model;
        int price;
        double secondsTo100;
        int year;

    /// constructor
    Car(int yearOfMade){
        year: yearOfMade;
    }
    Car(){        
    }
    Car(string carName){
        name : carName;
    }


    //metodlar

    void displayInfo(){
        cout << color << endl;
        cout << year << endl;
    }

    int getAgeOfCar(int currentYear){
        return currentYear - year;
    }


};

int main(){
    Car car1 = Car(2020);

    car1.color = "Red";
    car1.model = "Merc";
    car1.name = "X7";
    car1.secondsTo100 = 4.2;
    car1.year = 2020;

    // cout << car1.color << endl;
    cout << car1.getAgeOfCar(2025) << endl;

    car1.displayInfo();

    // Car car2 = Car();
    // car2.model = "BMW";


    return 0;
}