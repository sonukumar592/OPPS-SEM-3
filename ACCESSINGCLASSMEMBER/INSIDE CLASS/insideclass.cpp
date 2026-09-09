#include <iostream>
using namespace std;

class rectangle{
    int length,width;
    public:
    void set(int l, int  w){
        length=l;
        width=w;
    }
    int area(){
        return length*width;
    }
};
int main(){
    rectangle r;
    r.set(10,10);
    cout<<r.area();
}