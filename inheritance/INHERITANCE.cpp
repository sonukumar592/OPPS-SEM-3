#include <iostream>
using namespace std;
class person{
    public:
    string name;
    
    int age;
   
};
class student : public person{
    public:
    int roll_no ;
};
int main(){
    student s;
    s.name="SONU";
    s.age=21;
    s.roll_no=188;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.roll_no<<endl;

}