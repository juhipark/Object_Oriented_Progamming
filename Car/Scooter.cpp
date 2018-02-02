#include "Scooter.hpp"

Scooter::Scooter(){
    color = "";
    make = ""; 
    model = "";
    year = 1999;
    speed = 0;
}
Scooter::Scooter(string m1, string m2, int y, string c){

    make = m1;
    model = m2;
    year = y;
    color = c;
    speed = 0;
}
void Scooter::initScooter(){

    cout << "+++< Initalizing Scooter >+++\n";
    cout << "Enter Scooter's Make: ";
    getline(cin, make);
    cout << "Enter Scooter's Model: ";
    getline(cin, model);
    cout << "Enter Scooter's Year: ";
    cin >> year;
    cin.ignore();
    cout << "Enter Scooter's color: ";
    getline(cin, color);
    cout << "Starting speed is 0\n";
    cout << "+++++++++++++++++++++++++\n";

}
void Scooter::brake(){
    if(speed >=3){
        speed -= 3;
        assert(speed >= 0);
    }else{
        stop();
    }
}
void Scooter::accelerate(){
    
    speed += 1;
    //assert(speed >= 0);
    
}
void Scooter::stop(){

    speed = 0;
}
void Scooter::print_speed(){
    cout << "+++< Scooter Information >+++\n";
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Current speed: " << speed << " mph.\n\n";
}

    
