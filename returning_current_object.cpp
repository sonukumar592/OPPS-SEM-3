#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int marks;
    public:
    student*setName(string name){
        this->name=name;
        return this;
    }
    student*setMarks(int marks){
        this->marks=marks;
        return this;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student s;
    s.setName("sonu")->setMarks(90)->display();
    return 0;
}