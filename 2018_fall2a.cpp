//using constructor more then one is called constructor overloading
#include<iostream>
using namespace std;
class A{
private:
    string name;
    int age;
public:
    A(){
        cout<<"enter your name\n";
        cin>>name;
        cout<<"name:"<<name<<endl;
    }
    A(int x){
        age=x;
        cout<<"age:"<<age<<endl;
    }
};
int main(){
    A a1,a2(80);
    return 0;
}