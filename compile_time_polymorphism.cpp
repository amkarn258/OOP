#include <bits/stdc++.h>

using namespace std;

// compile time polymorphism has 2 components - function overloading and operator overloading
class poly {
    public:
    // below we're defining 3 functions with same name but with different parameters, this is called function overloading
    void func(int x) {
        cout<<"Integer x is "<<x<<endl;
    }
    void func(double x) {
        cout<<"Double x is "<<x<<endl;
    }
    void func(int x, int y) {
        cout<<"integers x and y are "<<x<<" and "<<y<<endl;
    }
};

// Below we're defining a complex number class to show operator overloading, the operator + will be used to ass 2 complex numbers
class complexNum {
    private:
    int real;
    int imag;
    public:
    // complexNum() {}
    complexNum(const int& r = 0, const int& i = 0) {
        real = r;
        imag = i;
    }
    complexNum operator+(complexNum const& c) {
        complexNum ans;
        ans.real = real + c.real;
        ans.imag = imag + c.imag;
        return ans;
    }
    void print() {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main() {
    // below is example of function overloading
    poly p;
    p.func(5);
    p.func(5.01);
    p.func(3, 4);
    // below is example of operator overloading
    complexNum c1(3, 4), c2(4, 7);
    complexNum c3 = c1 + c2;
    c3.print();
    return 0;
}