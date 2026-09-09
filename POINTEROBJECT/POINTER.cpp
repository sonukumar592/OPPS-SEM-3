//pointer can store the address of the object.
#include <iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    void display(){
        cout<<"Roll no : "<<rollno<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int main(){
    student s ;
    // s.rollno=188;
    // s.name="sonu";
    // student *ptr=&s;
    // ptr->display();
    student *ptr= &s;
    ptr->rollno=188;
    ptr->name="sonu";
    ptr->display();

}

//when accessing object members using an object pointer.we use arrow operator.