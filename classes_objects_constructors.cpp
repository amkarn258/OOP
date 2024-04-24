#include <bits/stdc++.h>

using namespace std;

class Car {
    public:
    string name;
    int speed;
    // Default constructor
    Car() {
        name = "Volkswagen";
    }
    // parametized constructor
    Car(string x) {
        name = x;
    }
    // copy constructor
    Car(const Car& other) {  // using const so we have read only access to the object we're copying from
        name = other.name;
        // other.name = "lambo"; // will give compilation error when using const, will modify the other object when not using const
    }
    void printname() {
        cout<<"Car name is "<<name<<endl;
    }
    void printspeed();
};

void Car::printspeed() {
    cout<<"Car speed is "<<speed<<endl;
}

int main() {
    // Car ferrari;
    // ferrari.name = "Ferrari";
    // ferrari.speed = 200;
    // ferrari.printname();
    // ferrari.printspeed();

    Car car1; // default constructor
    car1.printname();

    Car car2("Ferrari"); // parametized constructor
    car2.printname();

    Car car3(car1); // copy constructor
    car3.printname();
    car1.printname();
    return 0;
}