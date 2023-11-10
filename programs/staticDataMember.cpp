#include<iostream>
using namespace std;

class Student{
public: 
    int id;
    string name;
    static int timeToComplete;

    Student() {
        cout <<"Constructor called" << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }

    // static function creation
    static void random() {
        cout << timeToComplete << endl; // it is only access static data member
    }

};

int Student :: timeToComplete = 100;

int main() {

    // cout <<"Static data member value: "<< Student::timeToComplete << endl;
    // Student sapnendra;
    // cout <<"Data member using object: "<< sapnendra.timeToComplete << endl;

    // sapnendra.timeToComplete = 1111;  // it is not recommendation
    // cout << sapnendra.timeToComplete << endl;

    Student::random();
    return 0;
}