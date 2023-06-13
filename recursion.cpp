#include <iostream>

using namespace std;

int fibonacci(int n) {

    if (n <= 1) {
        return 1;
    }

    cout<<fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    return x * factorial(x - 1);
}

int main() {
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    int result = fibonacci(a);
    cout<<result;

}