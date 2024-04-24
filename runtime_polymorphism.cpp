#include <bits/stdc++.h>

using namespace std;

class Animal {
    public:
    string color = "Black";
    virtual void display() {
        cout<<"Animal here is "<<color<<" colored"<<endl;
    }
    void print() {
        cout<<"Animal class called"<<endl;
    }
};

class Dog: public Animal {
    public:
    string color = "Brown";
    void display() {
        cout<<"Dog here is "<<color<<" colored"<<endl;
    }
    void print() {
        cout<<"dog class called"<<endl;
    }
};

class Cat: public Animal {
    public:
    string color = "Grey";
    void display() {
        cout<<"Cat here is "<<color<<" colored"<<endl;
    }
    void print() {
        cout<<"Cat class called"<<endl;
    }
};

int main() {
    // Animal d = Dog();
    // cout<<d.color<<endl;
    Animal* aptr;
    Dog d;
    aptr = &d;
    aptr->display();
    aptr->print();
    Cat c;
    aptr = &c;
    aptr->display();
    aptr->print();
    return 0;
}