#include <iostream>
using namespace std;
class outer{
    public:
    class inner{
        public:
        void display(){
            cout<<"this is inner class"<<endl;
        }
    };

};
int main(){
    outer::inner obj;
    obj.display();
    return 0;
    
}