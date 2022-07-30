#include<iostream>
using namespace std;
class Derived;
class Base{
    public:
    int x,y,m,n;
    void get_data(){
        cout<<"enter two vector co-ordinates\n";
        cin>>x>>y;
        cout<<"enter two vector co-ordinates\n";
        cin>>m>>n;
    }
    friend void display(Base,Derived);
};
class Derived:public Base{
    public:
    int sum1,sum2;
    void add_vector(){
        sum1=x+m;
        sum2=y+n;
    }
    friend void display(Base,Derived);
};
void display(Base b,Derived d){
    cout<<"sum:"<<d.sum1<<"i+"<<d.sum2<<"j"<<endl;
}
int main(){
    Base b;
    Derived d;
    d.get_data();
    d.add_vector();
    display(b,d);
}