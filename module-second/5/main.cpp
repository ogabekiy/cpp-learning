#include <iostream>


using namespace std;


int main(){

    string cars[2] = {"Cobalt","Nexia"};
    cout << sizeof(cars)/sizeof(cars[0]) << endl;
    // cars[2] = "Matiz";
    // cout << cars << endl; //location
    // cout << cars[0] << endl;
    // cout << cars[2] << endl;


    // string carsS[][4] = {{"Mustang","Escape","F-150"},
    //                     {"Corvette","Equinox","Silverado"},
    //                     {"Challenger","Durango","Ram 1500"}};

    // cout << carsS[0][0] << endl;

    // sizeof(cars)

    return 0;
}