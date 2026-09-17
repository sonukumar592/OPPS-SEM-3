#include <iostream>
using namespace std;

class Calculator {
public:
    class Operations {
    public:
        class Addition {
        public:
            int add(int a, int b) {
                return a + b;
            }

            int add(int a, int b, int c) {
                return a + b + c;
            }

            double add(double a, double b) {
                return a + b;
            }
        };
         class subtraction {
        public:
            int sub(int a, int b) {
                return b - a;
            }

            int sub(int a, int b, int c) {
                return c - b - a;
            }

            double sub(double a, double b) {
                return b - a;
            }
        };


        class Multiplication {
        public:
            int mul(int a, int b) {
                return a * b;
            }

            int mul(int a, int b, int c) {
                return a * b * c;
            }

            double mul(double a, double b) {
                return a * b;
            }
        };

    };
};

int main() {
    Calculator::Operations::Addition addObj;

    Calculator::Operations::subtraction subObj;

    Calculator::Operations::Multiplication mulObj;




    cout << "Addition (2 ints): " << addObj.add(10, 20) << endl;
    cout << "Addition (3 ints): " << addObj.add(5, 15, 25) << endl;
    cout << "Addition (double): " << addObj.add(5.5, 4.5) << endl;

     cout << "subtraction (2 ints): " << subObj.sub(20, 40) << endl;
    cout << "subtraction (3 ints): " << subObj.sub(10, 20, 30) << endl;
    cout << "subtraction (double): " << subObj.sub(8.5, 9.5) << endl;


    cout << "Multiplication (2 ints): " << mulObj.mul(7, 6) << endl;
    cout << "Multiplication (3 ints): " << mulObj.mul(2, 3, 4) << endl;
    cout << "Multiplication (double): " << mulObj.mul(2.5, 4.0) << endl;


    return 0;
}