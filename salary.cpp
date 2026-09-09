#include <iostream>
using namespace std;
class employee{
 public:
    string name;
    int id;
    string position;
    string department;
    private:
    int salary;

    public:
    void input() {
        cout << "Enter id: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

    
        cout << "Enter position: ";
        getline(cin, position);

        
        cout << "Enter department: ";
        getline(cin, department);
    }

   
    void display() {
        cout << "\n--- employee Record ---" << endl;
        cout << "id : " << id << endl;
        cout << "Name: " << name << endl;
        cout << "position: " << position << endl;
        cout << "department: " << department << endl;

 }
};

int main() {
    employee E;   

    cout << "employee Record System\n";
    E.input();   
    E.display(); 

    return 0;
}