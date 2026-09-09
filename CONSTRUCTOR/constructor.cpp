#include <iostream>
using namespace std;
class student{
    int id;
    public:
    student() : id(0){}  //default
    student(int x) : id(x){} //parameterzied
    student (const student& s) : id(s.id){} //copy

    void display(){
        cout<<id<<endl;
    }
};
int main(){
    student s;
    s.display();
    student s1(5);
    s1.display();
    student s2(s1);
    s2.display();

}