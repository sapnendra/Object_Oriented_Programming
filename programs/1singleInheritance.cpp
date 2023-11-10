#include<iostream>
using namespace std;

class Animal {
public:
    string name;
    int weight;
    string typeOfAnimal;
public:
    void speaking() {
        cout << "Animal is speaking" << endl;
    }
    void running() {
        cout << "Minimum running speed of animals is: 10kmph" << endl;
    }
    void dangerous() {
        cout << "Animal is barking now: " << endl;
    }
};

class Dog : public Animal {
public: 
    int weight;
public:
    void barking() {
        cout << "Dog is barking now" << endl;
    }
    void sleeping() {
        cout << "Dog is sleeping now" << endl;
    }
};

int main() {
    Dog obj;
    obj.running();
    return 0;
}