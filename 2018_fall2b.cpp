#include<iostream>
using namespace std;
class employee{
    public:
    string name,address;
    int code,salary;
    employee(){
        cout<<"enter your name address code and salary respectively:\n";
        cin>>name;
        cin>>address;
        cin>>code;
        cin>>salary;
    }
    employee(employee &e2){
        e2.display();
    }
    void display(){
        cout<<"\nname:"<<name;
        cout<<"\naddress:"<<address;
        cout<<"\ncode:"<<code;
        cout<<"\nsalary:"<<salary;
    }
};
int main(){
    employee e1;
    employee e2(e1);
}