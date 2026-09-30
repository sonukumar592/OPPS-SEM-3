#include <iostream>
using namespace std;

class fahrenhit;

class celsius {
    float temp;

public:
    celsius(float t) : temp(t) {}

    void show() {
        cout << temp << " Celsius" << endl;
    }
};

class fahrenhit {
    float temp;

public:
    fahrenhit(float t) : temp(t) {}

    operator celsius() const {
        return celsius{(temp - 32) * 5 / 9};
    }
};

int main() {

    fahrenhit f(98.6f);

    celsius c = f;       // Fahrenheit -> Celsius

    c.show();

    return 0;
}