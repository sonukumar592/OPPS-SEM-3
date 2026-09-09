//concept of static member: a normal data member gets a seperate copy for every object .

// a static data member however has only one single copy shared by all objects of the class- like a common variable that every object can see and modify. It is declared using the keyword static inside the class definition. Static members can be accessed using the class name and the scope resolution operator (::) without creating an instance of the class.



#include <iostream>
using namespace std;
class student{
    public:
    static int totalstudent;
    student(){
        totalstudent++;
    }
};
int student::totalstudent=0;


// key point: memory for a static member is allocated only once ,regardless of whether 0 objects 0r 1000 objects exist.
// static member function: these can be called without creating an on ojbect.


class students {
public:
    static int totalstudents;

    static void showcount() {
        cout << "count : " << totalstudents << endl;
    }
};

int students::totalstudents = 0;

int main(){
    student s1,s2,s3,s4;
    cout<<"total students " <<student::totalstudent <<endl;
    students s5,s6,s7;
    students::showcount();

}