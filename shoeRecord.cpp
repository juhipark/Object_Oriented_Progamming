/****
 *
 * Homework #1 
 * Created by Juhi Park
****/

#include <iostream>
#include <string>

using namespace std;

struct ShoeRecord{
    float size;
    string color;
    string style;
    string name;
    float price;
};

void applyDiscount(ShoeRecord& s, double discount);
void display(ShoeRecord s);
int main(){
    ShoeRecord s1, s2, s3;

    s1.size = 5.5;
    s1.color = "Blue";
    s1.style = "Running shoes";
    s1.name = "Nike";
    s1.price = 35.7;

    s2.size = 7.0;
    s2.color = "Yellow";
    s2.style = "Converse";
    s2.name = "Converse";
    s2.price = 48.5;
    
    s3.size = 6.5;
    s3.color = "Red";
    s3.style = "Sneakers";
    s3.name = "Adidas";
    s3.price = 65;
    
    applyDiscount(s1, 10);
    applyDiscount(s2, 20);
    applyDiscount(s3, 50);
    
    display(s1);
    display(s2);
    display(s3);

    return 0;
}
void applyDiscount(ShoeRecord& s, double discount){
    s.price -= s.price*(0.01*discount);
}
void display(ShoeRecord s){
    cout << endl;
    cout << "The name of shoes is : ";
    cout << s.name <<"."<< endl;
    cout << "It is $" << s.price << " and size is " << s.size << ".\n";
    cout << "It is " << s.color << " color and " << s.style << " style.\n";
}

