#include<iostream>
using namespace std;

int main(){
    auto a = 2.5;
    cout << sizeof(a)<<endl;
    auto b = 5;
    cout << sizeof(b)<<endl;
    auto c = "sonu";
    cout << sizeof(c)<<endl;
    auto d = 'A';
    cout << sizeof(d)<<endl;


   int e[]={1,2,3,4,5,6,7,8,9};
    for (int b : e){
        cout<<b<<" ";
    }
}