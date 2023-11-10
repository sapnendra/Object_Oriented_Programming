#include <iostream>
using namespace std;
// creating class
class Smartphone {

public:
    // Data Members(Properties)
    string model;
    int year_of_manufacture;
    bool _5g_supported;

    // Constructor
    Smartphone(string model_string, int manufacture, bool _5g_) {
        // initialzing data members
        model = model_string;
        year_of_manufacture = manufacture;
        _5g_supported = _5g_;
    }

    // methods
    void print_details()
    {
        cout << "Model : " << model << endl;
        cout << "Year of Manufacture : " << year_of_manufacture << endl;
        if(_5g_supported) {
            cout << "5g Supported : "<< "Yes" << endl;
        } else {
            cout << "5g Supported : "<< "No" << endl;
        }
    }
};

int main()
{
    // creating objects of smartphone class
    Smartphone iphone("iphone 11", 2019, false);
    Smartphone redmi("redmi note 11t", 2021, true);
    Smartphone oneplus("oneplus nord", 2020, true);

    // accessing class variables
    int iphone_manufacture_date = iphone.year_of_manufacture;
    bool redmi_support_5g = redmi._5g_supported;
    string oneplus_model = oneplus.model;

    // calling methods on objects
    iphone.print_details();
    cout << endl;
    redmi.print_details();
    cout << endl;
    oneplus.print_details();
    return 0;
}