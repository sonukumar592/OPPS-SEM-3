#include<iostream>
using namespace std;

class Student{
    public:
        int marks;
};

void display(const Student& s){
    cout << s.marks;
}

int main(){
    Student st{90};
    display(st);
}