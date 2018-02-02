//preprocessor dirctive
//starts with '#' sign
#ifndef CAR_H//if not defined
#define CAR_H

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

class Car{
    
    private:
        string make;
        string model;
        int year;
        string color;
        int speed;

    public:
        Car();
        Car(string m1, string m2, int y, string c); 
        void initCar();
        void brake();
        void accelerate();
        void stop();
        void print_speed();

};

#endif //closing off the ifndef
