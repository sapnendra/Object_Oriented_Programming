#include<iostream>
using namespace std;

class SmartPhone {
public:
    // data memeber(properties)
    string model;
    int year_of_manufacture;
    bool is_5g_supported;
public:
    // default constructor
    SmartPhone() {
        this->model = "unknown";
        this->year_of_manufacture = 0;
        this->is_5g_supported = 0;
    }

    // parameterized constructor
    SmartPhone(string model, int year_of_manufacture, bool is_5g_supported) {
        this->model = model;
        this->year_of_manufacture = year_of_manufacture;
        this->is_5g_supported = is_5g_supported;
    }

    // copy constructor
    SmartPhone(SmartPhone &obj) {
        // copies data of obj parameter
        this->model = obj.model;
        this->year_of_manufacture = obj.year_of_manufacture;
        this->is_5g_supported = obj.is_5g_supported;
    }

    void print_detail() {
        cout << "Model of phone: " << model << endl;
        cout << "Year of manufacture: " << year_of_manufacture << endl;
        if(is_5g_supported) {
            cout << "is_5g_supported: " << "Yes" << endl;
        } else {
            cout << "is_5g_supported: " << "No" << endl;
        }
    }

};

int main() {
    // creating an object of SmartPhone class

    // using default constructor
    SmartPhone unknown;
    unknown.print_detail();
    cout << endl;

    // using parameterized constructor
    SmartPhone iphone("iphone 15 pro-max", 2023, true);
    iphone.print_detail();
    cout << endl;

    // using copy constructor
    SmartPhone iphone2(iphone);
    iphone2.print_detail();
    return 0;
}