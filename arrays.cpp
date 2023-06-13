#include <iostream>

using namespace std;

int main() {

    int marks[4] = {10, 20, 30, 40};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int* p = marks;

    cout<<"First entry: "<<*p<<endl;
    cout<<"First entry: "<<*(p+1)<<endl;
    cout<<"First entry: "<<*(p+2)<<endl;
    cout<<"First entry: "<<*(p+3)<<endl;


    return 0;

}