#include <iostream>
using namespace std;
class Number{
    private:
    int value;
    public:
    Number(int v){
        value=v;
    }
    Number operator + (Number n){
        Number temp(0);
        temp.value = value+n.value;
        return temp;
    }
     void display(){
        cout<<"value= "<<value<<endl;
     }
};
int main(){
    Number n1(10);
    Number n2(20);
    Number n3(30);
    Number n4=n1+n2+n3;
    n4.display();
    return 0;
}