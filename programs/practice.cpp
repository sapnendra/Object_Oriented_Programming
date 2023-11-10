#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;

    Student(int num) {
        rollno = num;
    }
    void print() {
        cout << name <<" : "<< rollno << endl;
    } 
};

int main() {
    Student s(191);
    s.name = "sapnenndra";
    s.print();
    return 0;
}