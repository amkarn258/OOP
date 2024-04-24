#include <bits/stdc++.h>

using namespace std;

// in the below class hiding of radius data member is abstraction

class Circle {   // this whole class is good example of using enscapulation
    private:    
    int radius;  // defining the only data member in private to hide it
    public:
    Circle() {
        radius = 10; // default constructor using the private data member - enscapulation
    }
    Circle(const int& r) { // can still change the private var here, but only in a controlled way - enscapulation
        radius = r;
    }
    void computeArea() { // private var is still available here, but can't be accessed directly outside the class - enscapulation
        cout<<"Area of circle is "<<3.14 * radius * radius<<endl;
    }
};

int main() {
    // Circle c1;
    // c1.radius = 5; // Will give compilation error since we're trying to access the private variable directly
    Circle c1;
    c1.computeArea();
    Circle c2(5);
    c2.computeArea();
    return 0;
}