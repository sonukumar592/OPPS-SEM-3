#include <iostream>
using namespace std;
class person{
    public:
    int age;
    string name;

};

class student{
    public:
    int roll_no;
};

class employee : public student, public person{
    public:
    int id;
    string department;
    int salary;
};

int main(){
    employee e;
     e.name="SONU";
    e.age=21;
    e.roll_no=188;
    
    e.id=101;
    e.salary=50000;
    e.department="IT";


    cout<<e.name<<endl;
    cout<<e.age<<endl;
    cout<<e.roll_no<<endl;
    cout<<e.id<<endl;
    cout<<e.salary<<endl;
    cout<<e.department<<endl;
}