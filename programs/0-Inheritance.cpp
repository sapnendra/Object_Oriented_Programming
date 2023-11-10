#include<bits/stdc++.h>
using namespace std;

class Human {
public:
    string name;
    int age;
public:
    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
};

class Male : public Human {
public:
    string color;
    void setColor(string color) {
        this->color = color;
    }
    string getColor() {
        return this->color;
    }
    string getName() {
        return this->name;
    }
    int getAge() {
        return this->age;
    }
};

int main() {
    Male obj1;
    obj1.setName("Sapnendra");
    obj1.setAge(21);
    obj1.setColor("Sanwla");
    cout <<"Name: "<< obj1.getName() << endl;
    cout <<"Age: "<< obj1.getAge() << endl;
    cout <<"Color: "<< obj1.getColor() << endl;

    // obj1.setAge(20);
    // obj1.setName("Sapnendra");
    // obj1.setColor("Sanwla");

    // cout <<"Name: "<< obj1.name << endl;
    // cout <<"Age: "<< obj1.age << endl;
    // cout <<"Color: "<< obj1.color << endl;
    
    return 0;
}