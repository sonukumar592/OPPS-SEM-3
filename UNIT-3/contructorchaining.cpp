// constructor chaining means calling one constructor from another constructor .
#include <iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    student(int r, string n){
        roll=r;
        name=n;
    }

    student():student(188,"SONU"){
        cout<<"Default constructor called "<<endl;
    } 

    void display(){
        cout<<"ROLL NO "<<roll<<endl;
        cout<<"Name "<<name<<endl;

    }
};
int main(){
    student s;
    s.display();
    
}