#include<iostream>
using namespace std;

class A {
public:
    string name;
public:
    void first() {
        cout << "This is \"Root\" level class" << endl;
    }
};

class B : public A{
public:
    string color;
public: 
    void secondLevel() {
        cout <<"This is second level class"<< endl;
    }
};

class C : public A {
public: 
    int dm;
public:
    void secondLevel() {
        cout <<"this is second level class"<< endl;
    }
};

class D : public B {
public:
    void thirdLevel() {
        cout << "Inherited properties from class B" << endl;
    } 
};


class E : public B {
    void thirdLevel() {
        cout << "Inherited properties from class B" << endl;
    } 
};

class F : public B {
    void thirdLevel() {
        cout << "Inherited properties from class B" << endl;
    } 
};

class G : public C {
    void thirdLevel() {
        cout << "Inherited properties from class C" << endl;
    }
};

class H : public C {
    void thirdLevel() {
        cout << "Inherited properties from class C" << endl;
    }
};

int main() {
    A obj;
    obj.first();
    return 0;
}