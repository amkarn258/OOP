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
    Car(const string val) {
        name = val;
    }
    // Destructor - is called when scope of the object is ended
    ~Car() {
        cout<<"Destructor called for name = "<<name<<endl;
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
    Car car1("Ferrari");
    vector<string> carnames;
    carnames.push_back("Lambo");
    carnames.push_back("Jaguar");
    carnames.push_back("Car nachdi");
    for (int i=0; i<3; i++) {
        Car car2(carnames[i]);
    } // scope of car 2 ended
    return 0;
} // scope of car 1 ended