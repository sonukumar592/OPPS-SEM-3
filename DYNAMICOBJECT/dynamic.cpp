// #include <iostream>
// using namespace std;
// class Employee{
//     public:
//     int id;
//     string name;
//     void display(){
//         cout<<"ID :"<<id<<endl;
//         cout<<"NAME:"<<name<<endl;
//        }

// };
// int main(){
//     Employee*emp=new Employee;
//     emp->id=188;
//     emp->name="SONU";
//     emp->display();
//     delete emp;
//     emp->display();
// }
#include <iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    void input(){
        cout<<"enter rollno: ";
        cin>>rollno;
        cout<<"enter name: ";
        cin>>name;

    }
    void display(){
        cout<<"Rollno :"<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }

};
int main(){
    student students[3];
    for(int i=0;i<3;i++){
        cout<<"students"<<i+1<<endl;
        students[i].input();

    }
    cout<<"Student details "<<endl;
    for(int i=0;i<3;i++){
        students[i].display();
    }
}
