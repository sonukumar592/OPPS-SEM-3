#include <iostream>
using namespace std;

class point {
public:
    int x, y;

    point(int a, int b) {
        x = a;
        y = b;
    }
};

point createpoint(int a, int b) {
    return point(a, b);
}

int main() {
    point p = createpoint(10, 20);

    cout << p.x << " " << p.y;

    return 0;
}