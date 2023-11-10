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

class D {
public:
    int number;
public:
    void fun1() {
        cout << "By using this class we can achieve hybrid inheritance" << endl;
    }
};

class C : public A , public D {
public: 
    int dm;
public:
    void third() {
        cout << "This is third class which is inherited all the properties of class A and class B" << endl;
    }
};

int main() {
    
    return 0;
}