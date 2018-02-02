#include "Car.hpp"

Car::Car(){

    make = "";
    model = "";
    year = 1999;
    color = "";
    speed = 0;
}
Car::Car(string m1, string m2, int y, string c){
    
    make = m1;
    model = m2;
    year = y;
    color = c;
    speed = 0;
}   
void Car::initCar(){
    cout << "+++< Initalizing Car >+++\n";
    cout << "Enter Car's Make: ";
    getline(cin, make);
    cout << "Enter Car's Model: ";
    getline(cin, model);
    cout << "Enter Car's Year: ";
    cin >> year;
    cin.ignore();
    cout << "Enter Car's color: ";
    getline(cin, color);
    cout << "Starting speed is 0\n";
    cout << "+++++++++++++++++++++++++\n";
}

void Car::brake(){
    if(speed >= 2){    
        speed -= 2;
        assert(speed >= 0);
    }else{
        stop();
    }
}
void Car::accelerate(){

    speed += 2;
    assert(speed >= 0);
}
void Car::stop(){
    
    speed = 0;
}
void Car::print_speed(){
    
    cout << "+++< Car Information >+++\n";
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Current speed: " << speed <<" mph.\n\n";
}


