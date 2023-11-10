#include<bits/stdc++.h>
using namespace std;

class Hero{
private:
    string name;
    int age;
public:
    // getter and setter
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
};

int main() {
    Hero tiger;
    tiger.setName("Tiger Shroff");
    tiger.setAge(21);
    cout <<"Name: " << tiger.getName() << endl;
    cout <<"Age: " << tiger.getAge() << endl;
    return 0;
}