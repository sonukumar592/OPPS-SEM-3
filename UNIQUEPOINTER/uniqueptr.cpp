#include <iostream>
#include <memory>
using  namespace std;
class student{
    public:
    void display(){
        cout<<"Students object is created:"<<endl;
    }
};
int main(){
    unique_ptr<student>ptr=make_unique<student>();
    ptr->display();
    unique_ptr<student>ptr1=move(ptr);
    ptr1->display();
}
