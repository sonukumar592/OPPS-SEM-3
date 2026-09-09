#include <iostream>
using namespace std;
class student{
    int marks;
    public:
    student(){
        marks=90;

    }
    friend void display(student s);
};
void display(student s){
    cout<<"Marks: "<<s.marks<<endl;
}
int main(){
    student s;
    display(s);
    return 0;
}