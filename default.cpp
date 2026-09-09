#include <iostream>
#include <cstdarg>
using namespace std;
// void display(int a =10, int b=20){
//     cout<<"a ="<<a<<",b="<<b<<endl;
// }
// int main(){
//     display();
//     display(5);
//     display(5,15);
//     display(10,30);
//     return 0;
// }

// va_list stores the list of variable arguments
// va_start() intializes the arguments list
// va_arg() retrives the next arguments
// va_end() clens up the argument list
// ... indicates variable arguments


// function to calculate sum
int sum(int count, ...){
    va_list args;
    va_start(args,count);
    int total=0;
    for(int i=0; i<count; i++){
        total += va_arg(args,int); 
    }
    va_end(args);
    return total;
}
int main(){
    cout<<"sum ="<<sum(3,10,20,30)<<endl;
    cout<<"sum ="<<sum(5,6,7,8,5,9)<<endl;
}
