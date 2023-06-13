#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;
public:
    int d, e;
    int sum(int a, int b, int c);
    void getData(){
        cout<<d<<endl;
        cout<<e<<endl;
    };
};

int Employee :: sum(int a, int b, int c) {
    return a + b + c;
}


int main() {

    return 0;

}