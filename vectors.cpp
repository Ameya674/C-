#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main() {

    vector<int> vec1;

    for (int i = 0; i < 4; i++) {
        int element;
        cout<<"Enter a number: "<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);

    return 0;

}