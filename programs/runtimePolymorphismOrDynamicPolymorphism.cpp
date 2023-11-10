#include<iostream>
using namespace std;

class Human {
public:
    void speaking() {
        cout << "All human speaking inside Human" << endl;
    }
};

class Dog : public Human {
public: 
    void speaking() {
        cout << "All Dog barking inside Dog" << endl;
    }
};

int main() {
    Dog obj;
    obj.speaking();
    return 0;
}