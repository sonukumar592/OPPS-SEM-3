#include<iostream>
using namespace std;

int main() {

    auto a = 2.5;
    cout << "Size of a = " << sizeof(a) << endl;

    auto b = 5;
    cout << "Size of b = " << sizeof(b) << endl;

    auto c = "sonu";
    cout << "Size of c = " << sizeof(c) << endl;

    auto d = 'A';
    cout << "Size of d = " << sizeof(d) << endl;

    int e[] = {1,2,3,4,5,6,7,8,9};

    cout << "Array Elements: ";

    for (auto x : e) {
        cout << x << " ";
    }

    return 0;
}