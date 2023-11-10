#include<iostream>
using namespace std;

class Student{
public: 
    int id;
    string name;

    Student() {
        cout <<"Constructor called" << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    // statically object
    Student sapnendra;

    // dynamically object
    Student* kunal = new Student;

    // manually destructor called for dynamically abject created previouly
    delete kunal;

    return 0;
}