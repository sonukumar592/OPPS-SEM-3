#include<iostream>
using namespace std;

class university{
    public:
    class student{
        public:
        void show(){
            cout << "Student Information"<<endl;
        }
    };
    void UniversityInfo(){
        cout <<"ABES Engineering College"<<endl;
    }
};

int main(){
    university::student s;
    s.show();
    university u;
    u.UniversityInfo();
}