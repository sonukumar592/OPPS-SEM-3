#include <iostream>
using namespace std;
class Account{
    public:
    void withdraw(){      //not vitual
        cout<<"withdrawing with standard rules"<<endl;
    }
};

class SavingAccount : public Account{
    public:
    void withdraw(){                 // redefines Account's withdraw()
        cout<<"withdrawing with savings account limits"<<endl;
    }
};
int main(){
    SavingAccount sa;
    sa.withdraw();
     Account*a=&sa;
    a->withdraw();
}