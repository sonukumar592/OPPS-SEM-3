#include <bits/stdc++.h>
using namespace std;

class String{
    private:
        char str[100];

    public:
        String(const char s[] = " "){
            strcpy(str,s);
        }

    String operator + (String s){
        String temp;

        strcpy(temp.str , str);
        strcat(temp.str , s.str);

        return temp;
    }

    void display(){
        cout << str;
    }
};

int main(){
    String s1("Hello");
    String s2("World");

    String s3 = s1 + s2;

    cout << "First String : " ;
    s1.display();

    cout << "\nSecond String : " ;
    s2.display();

    cout << "\nResult : " ;
    s3.display();

}