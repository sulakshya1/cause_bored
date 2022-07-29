#include<iostream>
using namespace std;
class Derived;
class Base{
    public:
    int x,y;
    void get_data(){
        cout<<"enter two vector co-ordinates\n";
        cin>>x>>y;
    }
    friend void display(Base,Derived);
};
class Derived:public Base{
    public:
    int sum;
    void add_vector(){
        sum=x+y;
    }
    friend void display(Base,Derived);
};
void display(Base b,Derived d){
    cout<<"sum:"<<d.sum;
}
int main(){
    Base b;
    Derived d;
    d.get_data();
    d.add_vector();
    display(b,d);
}