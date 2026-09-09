#include <iostream>
using namespace std;
class bankaccount{
    private:
    string accountholder;
    int accountnumber;
    double balance;
    public:
    void createaccount(string name, int accNO, double initialbalance){
        accountholder=name;
        accountnumber=accNO;
        balance=initialbalance;
    }

    void deposit(double amount){
        if(amount>0){
            balance +=amount;
            //cout<<"amount deposit :";
            cout<<"current balance: " <<balance<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }

    void withdrwal  (double amount){
        if(amount<=0){
            cout<<"inavalid amount"<<endl;;
        }
        else if(amount > balance){
            cout<<"insufficient balance"<<endl;
        }
        else{
            balance -=amount;
            cout<<"amount withdrwal" <<endl;
            cout<<"current balance:" << balance <<endl;

        }

    }
    void display(){
        cout << "\n--- Bank account details ---\n" << endl;
         cout << "Account holder: " << accountholder << endl;
        // cout << "Account number: " << accountnumber << endl;
        cout << "Blance: " << balance << endl;

    }
};
int main(){
 int accNO;
 string Accname;
 double balance, withdraw, depo;
 cout<<"account holder name:";
 cin>>Accname;
 cout<<"enter account number:";
 cin>>accNO;
 cout<<"enter balance:";
 cin>>balance;

 bankaccount account;
 account.createaccount(Accname,accNO,balance);
 account.display();

 cout<<"amount deposited";
 cin>>depo;
 account.deposit(depo);

 cout<<"amount withdrawl :";
 cin>>withdraw;
 account.withdrwal(withdraw);
 return 0;
}