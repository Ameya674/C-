#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 2, y = 4;

    cout<<"x: "<<x<<" and y: "<<y<<endl;
    swap(&x, &y);
    cout<<"x: "<<x<<" and y: "<<y<<endl;

    return 0;

}