#include <iostream>
using namespace std;
// int main(){
//     int a=15;
//     int b=2;
//     double result =float  (a)/b;
//     cout<<result<<endl;
// }


class Distance {
    float meters;

public:
  
    Distance(float m) : meters(m) {} // single-arg constructor

    void show() {
        cout << meters << " m" << endl;
    }
};

// void function
void printDistance(Distance d) {
    d.show();
}

int main() {

    Distance d1 = 5.0f;      // float -> Distance(implicit)
    Distance d2(12.5f);      // float -> Distance(explicit)

    printDistance(d1);
    printDistance(d2);

    return 0;
}