// #include <bits/stdc++.h>
// using namespace std;
// class number{
//     int value;
//     public:
//     number(int v){
//         value=v;
//     }

//     void operator-(){
//         value=-value;
//     }
//     void show(){
//         cout<<"value="<<value<<endl;
//     }
// };
// int main(){
//     number n(10);
//     n.show();
// -n;
// n.show();
// return 0;

// }
#include <bits/stdc++.h>
using namespace std;
class number{
    int value;
    public:
    number(int v){
        value=v;
    }

    void operator+(){
        value=+value;
    }
    void show(){
        cout<<"value="<<value<<endl;
    }
};
int main(){
    number n(10);
    n.show();
+n;
n.show();
return 0;

}