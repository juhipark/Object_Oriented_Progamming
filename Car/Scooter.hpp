#define NDEBUG

#ifndef SCOOTER_H
#define SCOOTER_H

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

class Scooter{
    private:
        string color;
        string make;
        string model;
        int year;
        int speed;

    public:
        Scooter();
        Scooter(string m1, string m2, int y, string c);
        void initScooter();
        void brake();
        void accelerate();
        void stop();
        void print_speed();
    
};

#endif
