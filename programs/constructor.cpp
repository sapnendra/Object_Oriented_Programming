#include<bits/stdc++.h>
using namespace std;

class Hero {
public:
    string name;
    int age;
    char *place;

    Hero() {
        cout << "Copy constructor called" << endl;
        place = new char[100];
    }
    // parameterized constructor creation
    Hero(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // copy constructor created by me same as default made by compiler
    Hero(Hero &tiger) {
        this->name = tiger.name;
        this->age = age;
    }

    // copy constructor creation by me different from compiler
    Hero(Hero &tiger, int age) {
        this->name = tiger.name;
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string str) {
        name = str;
    }

    void setAge(int n) {
        age = n;
    }

    void setPlace(char place[]) {
        this->place = place;
    }

    void print() {
        cout <<"[ Name: " << this->name << " , ";
        cout << "Age: " << this->age << " , ";
        cout << "Place: " << this->place << " ]";
        cout << endl;
    }
};

int main() {

    Hero hero1;
    hero1.setName("Sapnendra");
    hero1.setAge(21);
    char place[10] = "Delhi";
    hero1.setPlace(place);

    hero1.print();

    // use default copy constructor

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'P';
    hero1.print();
    hero2.print();



    
    // Hero tiger("Tiger Shroff", 23); // parameterized constructor called
    // cout <<"Name : " << tiger.name << endl;
    // cout <<"Age: " << tiger.age << endl;

    // // copy constructor called automatically
    // Hero mega(tiger);
    // mega.print();

    // Hero mega2(tiger, 30);
    // mega2.print();   

    return 0;
}