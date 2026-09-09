#include <iostream>
#include <algorithm>
using namespace std;
void  swap_call_by_value(int x, int y){
     cout<<x<<" "<<y<<endl;
     swap(x,y);
     cout<<x<<" "<<y<<endl;

}

void swap_call_by_pointer(int *x,int *y){
    cout<<x<<" "<<y<<endl;
     swap(*x,*y);
     cout<<*x<<" "<<*y<<endl;
}

void swap_call_by_reference(int &x,int&y){
     cout<<x<<" "<<y<<endl;
     swap(x,y);
     cout<<x<<" "<<y<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap_call_by_value(a,b);
    swap_call_by_pointer(&a,&b);
    swap_call_by_reference(a,b);
    
}