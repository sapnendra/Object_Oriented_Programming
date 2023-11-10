#include <iostream>
using namespace std;

// macro with parameter
#define Area(l, b)(l > b ? l-b : l+b)

int main() {
    int l = 25, b = 5, a;
    
    cout << "The Macro: " << Area(l, b) << endl;
    return 0;
}