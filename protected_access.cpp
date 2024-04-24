#include <bits/stdc++.h>

using namespace std;

class Parent {
    private:
    int id_private;
    protected:
    int id;
};

class child: Parent {
    public:
    void setid(const int& i) {
        id = i;
        // id_private = i; // will throw error since only protected members can be modified in subclass not private
    }
    void showid() {
        cout<<"id = "<<id<<endl;
    }
};

int main() {
    child ch1;
    ch1.setid(5);
    ch1.showid();
    return 0;
}