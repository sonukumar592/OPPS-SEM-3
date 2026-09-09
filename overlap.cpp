#include <iostream>
using namespace std;
class demo{
    public:
    // functions_with_overloading
    void show(){
      cout<<"show no value"<<endl;
    }

    void show(int a){
        cout<<"shows and value"<<" "<<a<<endl;
    }
    void show(int a, int b){
        cout<<"shows addition of two values"<<" "<<a+b<<endl;;
    }

};
    //functions_with_inline
    inline int area (int a,  int b){
           int area = a*b;
           return area;
     
        }
        //functions with default arguments
    int add(int a=7,int b=9){
        return a+b;
    }
    int main(){
        int a,b,c;
        // cin>>a;
        // cin>>b;
        c=add(7,9);
        cout<<c<<endl;

        demo obj;
        obj.show();
        obj.show(5);
        obj.show(5,10);
        cout<< "area of reactangle" <<" "<< area( 5,6);  
    }