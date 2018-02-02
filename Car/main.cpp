#define NDEBUG // end debug, disabling assert statements
#include "Car.hpp"
#include "Scooter.hpp"

using namespace std;

int main(){
    char car_choice='y', scooter_choice='y';
    Car c1("Honda", "Civic", 2012, "White");
    Scooter s1("Yamaha", "Zuma 125", 2017, "Red");

    /*
    cout << "Please Enter vehicle infomations below \n";
    c1.initCar();
    s1.initScooter();
    */
    cout << "Accelerating 4 times each vehicles.\n";
    for(int i=0; i<4; i++){
        c1.accelerate();
        s1.accelerate();
    }
    c1.print_speed();
    s1.print_speed();
    cout << endl;  
    cout << "Braking 2 times each vehicles.\n";
    for(int i=0; i<2; i++){
        c1.brake();
        s1.brake();
    }
    c1.print_speed();
    s1.print_speed();
    

    return 0;
}
