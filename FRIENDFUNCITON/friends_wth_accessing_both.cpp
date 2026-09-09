#include <iostream>
using namespace std;
class employee{
    private:
    int salary;
    public:
    string name;
    employee(string n,int s){
        name=n;
        salary=s;

    }
    friend void display(employee e);
};
void display(employee e){
    cout<<"NAME: "<<e.name<<endl;
    cout<<"Salary "<<e.salary<<endl;
}
int main(){
    employee e("sonu",90000);
    display(e);
    return 0;
}