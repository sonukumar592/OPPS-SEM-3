#include <iostream>
using namespace std;
class Bankaccount{
    private:
    double balance=0;
public:
void deposit(double amount){
    if(amount>0)
    balance+=amount;
}
void withdrwal(double amount){
    if(balance>=amount)
    balance-=amount;
}
double getbalance()const{
    return balance;
}

};
int main(){
    Bankaccount b;
    b.deposit(10000);
    
    b.withdrwal(10000);
    b.getbalance();
    cout<<b.getbalance()<<endl;
}