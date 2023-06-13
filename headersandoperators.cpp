#include <iostream>

// There are 2 types of header files
// 1) Ones that come with the system
// 2) User made / defined

using namespace std;

int main() {
    int a = 4, b = 5;

    cout<<"Sum: "<< a+b <<endl;
    cout<<"Difference: "<< a-b <<endl;
    cout<<"Product: "<< a*b <<endl;
    cout<<"Division: "<< a/b <<endl;
    cout<<"Remainder: "<< a%b <<endl;
    cout<<"Increment: "<< a++ <<endl;
    cout<<"Decrement: "<< a-- <<endl;
}