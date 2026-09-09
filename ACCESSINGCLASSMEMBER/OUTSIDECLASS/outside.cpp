#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    void set(int l, int w);
    int area();
};

void Rectangle::set(int l, int w) {
    length = l;
    width = w;
}

int Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r;

    r.set(10, 5);

    cout << "Area = " << r.area() << endl;

    return 0;
}