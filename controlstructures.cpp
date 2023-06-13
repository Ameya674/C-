#include <iostream>

using namespace std;

int main() {

    int age;
    cout<<"Enter age: "<<endl;
    cin>>age;

    if (age < 18) {
        cout<<"Not an adult"<<endl;
    }
    else if (age > 18) {
        cout<<"You are an adult"<<endl;
    }
    else {
        cout<<"Dont know what you are"<<endl;
    }

    switch (age) {
        case 18: 
        cout<<"You are 18"<<endl;
        break;
        case 14:
        cout<<"You are 14"<<endl;
        break;
        default:
        cout<<"Kya bol raha bhai??"<<endl;
    }



    return 0;
}