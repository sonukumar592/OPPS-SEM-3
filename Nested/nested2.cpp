#include <iostream>
using namespace std;
class Bank{
    public:
    //nested class
    class Account{
        private:
        int accountNumber;
        double balance;
        public:
        Account(int number,double amount){
            accountNumber=number;
            balance=amount;

        }
        void showAccount(){
            cout<<"Account number : "<<accountNumber<<endl;
            cout<<"Balance : " <<balance<<endl;
        }
    };
    public:
    // public function to access private account class
    void createAccount(){
        Account customer1(101,50000);
        customer1.showAccount();
    }

};
int main(){
        Bank b;
        b.createAccount();
}