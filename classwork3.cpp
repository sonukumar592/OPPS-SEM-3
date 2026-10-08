#include <iostream>
using namespace std;
void callbyvalue(int x){
    x=x+20;
};

void callbyreference(int &x){
    x=x+20;
};

void callbyaddress(int *x){
    *x=*x+20;
};

int main(){
    int a;
    cin>>a;
   cout<<a<<endl;
   callbyvalue(a);
   cout<<"after function: "<<a<<endl;

     
   callbyreference(a);
   cout<<"after function: "<<a<<endl;


   callbyaddress(&a);
   cout<<"after function: "<<a<<endl;

}