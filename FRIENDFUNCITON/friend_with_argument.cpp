#include <iostream>
using namespace std;

class Student{
    int marks;

    public:
    Student(int m ){
        marks = m;
    }

    friend void compare(Student s1 , Student s2);
};

void compare(Student s1 , Student s2){
    if(s1.marks > s2.marks){
        cout << "Student 1 scored more"<<endl;
    }
    else if(s1.marks < s2.marks){
        cout << "Student 2 scored more"<<endl;
    }
    else{
        cout << "Both Scored equal marks" << endl;
    }
}


int main(){
    Student s1(90);
    Student s2(92);

    compare(s1,s2);
}