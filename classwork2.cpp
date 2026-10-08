#include <iostream>
using namespace std;
class student{
    public:
    int marks;
    student(){
        marks=80;
    }
    friend void display(student s);

    void dislay(student s){
        cout<<s.marks<<endl;
    }

};
int main(){
  student s;
  display(s);
}