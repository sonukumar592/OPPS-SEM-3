#include <iostream>
using namespace std;
class employee{
 public:
    string name;
    int id;
    string position;
    string department;
    
    int product_price_per_unit=5000;
    int fixed_salary=15000;
    int units;
    double price_of_total_product_sold;
    double incentive;
    double total_salary;

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

        cout<<"no of products sold";
        cin>>units;

        price_of_total_product_sold=units*product_price_per_unit;

         if (units >= 0 && units <= 5) {
            incentive = 0;
        }
        else if (units >= 6 && units <= 10) {
            incentive = units * product_price_per_unit * 0.05;
        }

        else if (units >= 11 && units <= 20) {
            incentive = units * product_price_per_unit * 0.07;
        }

        total_salary=incentive+fixed_salary;


    }
   
    void display() {
        cout << "\n--- employee Record ---" << endl;
        cout << "id : " << id << endl;
        cout << "Name: " << name << endl;
        cout << "position: " << position << endl;
        cout << "department: " << department << endl;
        cout << "Products Sold: " << units << endl;
        cout<<" total product price " << price_of_total_product_sold <<endl;
        cout << "Product Price: Rs. " << product_price_per_unit << endl;
        cout << "Fixed Salary: Rs. " << fixed_salary << endl;
        cout << "Incentive: Rs. " << incentive << endl;

        cout<<" total salary" << total_salary <<endl;

 }
};

int main() {
    employee E;   

    cout << "salesman Record System\n";
    E.input();   
    E.display(); 

    return 0;
}