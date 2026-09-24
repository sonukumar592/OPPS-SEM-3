#include <iostream>
using namespace std;

class payment {
public:
    virtual void pay(int amount) {
        cout << "Paying Rs. " << amount << " using generic payment method" << endl;
    }
};

class CreditCard : public payment {
public:
    void pay(int amount) override {
        cout << "Paying Rs. " << amount << " using credit card" << endl;
    }
};

class UPI : public payment {
public:
    void pay(int amount) override {
        cout << "Paying Rs. " << amount << " using UPI" << endl;
    }
};

int main() {
    payment* method;

    CreditCard cc;
    UPI upi;

    method = &cc;
    method->pay(500);

    method = &upi;
    method->pay(200);

    return 0;
}