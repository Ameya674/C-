#include <iostream>

using namespace std;

typedef struct employee {
    int id;
    string name;
    string description;
}ep;

union money {
    int rupee;
    int dollar;
    int pound;
};


int main() {

    ep Ameya;
    Ameya.id = 1;
    Ameya.name = "Ameya";
    Ameya.description = "Great guy";
    

    return 0;

}