#include <bits/stdc++.h>

using namespace std;

class Circle {
    private:
    int radius;
    public:
    Circle() {
        radius = 10;
    }
    Circle(const int& r) { // can still change the private var here, but only in a controlled way
        radius = r;
    }
    void computeArea() { // private var is still available here, but can't be accessed directly outside the class
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