#include <iostream>
using namespace std;
class mathematics{
    public:
    int add( int a,int b);
    int subtract(int a,int b);
};

int mathematics :: add(int a,int b){
    return a+b;
}

int mathematics :: subtract(int a,int b){
    return b-a;
}

int main(){
    mathematics m;
    cout<<m.add(10,5)<<endl;
    cout<<m.subtract(40,60)<<endl;
}