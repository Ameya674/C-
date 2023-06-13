#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // variable that cant be changed
    const float pi = 3.14;
    cout<<pi<<endl; // endl is a manipulator.

    int a = 10, b = 200, c = 3000;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    cout<<"a with setw: "<<setw(4)<<a<<endl;
    cout<<"b with setw: "<<setw(4)<<b<<endl;
    cout<<"c with setw: "<<setw(4)<<c<<endl;


    return 0;
}