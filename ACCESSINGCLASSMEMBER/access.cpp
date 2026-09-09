#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    void show() {
        cout << "ID: " << id << endl;
    }

    void getter() {
        cout << "ID: " << id << endl;
    }

    void setter(int value) {
        id = value;
    }
};

int main() {
    Student s;

    s.setter(101);  
    s.getter();     
    s.show();    

    return 0;
}