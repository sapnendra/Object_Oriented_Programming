#include<iostream>
using namespace std;

class Father {
public:
    int height;
public: 
    void bitting() {
        cout << "Father is bitting us" << endl;
    }
};

class Mother : public Father {
public:
    string color;
public:
    void loving() {
        cout << "Mummy doing love to his children" << endl;
    }
};

class Boy : public Mother {
public:
    string name;
public: 
    void playing() {
        cout << "Boy is playing" << endl;
    }
};

int main() {

    return 0;   
}