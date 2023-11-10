#include<iostream>
using namespace std;

class A {
public:
    string name;
public:
    void first() {
        cout << "This is first class" << endl;
    }
};

class B {
public:
    string color;
public: 
    void second() {
        cout << "This is second class" << endl;
    }
};

class C : public A , public B {
public: 
    int dm;
public:
    void third() {
        cout << "This is third class which is inherited all the properties of class A and class B" << endl;
    }
};

int main() {
    C obj;
    obj.first();
    obj.second();
    obj.third();
    return 0;   
}