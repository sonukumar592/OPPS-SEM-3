// #include <iostream>
// using namespace std;
// class Employee{
//     static int alivecount;//shared counter across all objects
//     public:
//     Employee(){
//         alivecount++;
//         cout<<"Employee created . currently alive :"<<alivecount<<endl;
//     }
//     ~Employee(){
//         alivecount--;
//         cout<<"Employee destroyed . currently alive :"<<alivecount<<endl;
//     }

// };
// int Employee::alivecount=0;
// int main(){
//     Employee e1;
//     {
//         Employee e2;
//         Employee e3;
//     }
//     cout<<"back in main()"<<endl;
// }
#include <iostream>
using namespace std;
class student{
    int marks;
    string name;
    public:
    static int rollno;
    student( string n,int m){
        name=n;
        marks=m;
        rollno++;
    }
    void show(){
        cout<<"Name :"<<name<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"marks: "<<marks<<endl;
    }

};
int student::rollno=253200;
int main(){
    student s1("sonu",90);
    s1.show();
    student s2("shahil",85);
    s2.show();
    student s3("rohit",80);
    s3.show();

}