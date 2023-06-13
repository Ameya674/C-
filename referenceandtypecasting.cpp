#include <iostream>

using namespace std;

int c = 8;

int main() {
    // accessing global variable
    cout<<::c;
    float d = 34.4f;
    cout<<"size of: "<<sizeof(34.4f)<<endl;
    cout<<"size of: "<<sizeof(34.4F)<<endl;
    cout<<"size of: "<<sizeof(34.4l)<<endl;
    cout<<"size of: "<<sizeof(34.4L)<<endl;

    int x = 45;
    int &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    float z = 34.2;
    cout<<int(z);
    

    return 0;
}