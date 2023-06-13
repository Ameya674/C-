#include <iostream>

using namespace std;

int main() {

    int a = 3;

    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<*ptr<<endl;

    int ** c = &ptr;
    cout<<c<<endl;


    return 0;

}