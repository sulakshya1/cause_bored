#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void getdata(){
        cout<<"enter any number:";
        cin>>a;
    }
    A operator *(A a2){
        A a3;
        a3.a=a*a2.a;
        return a3;
    }
    void show(){
        cout<<"A:"<<a;
    }
};
int main(){
    A a1;
    a1.getdata();
    A a2;
    a2.getdata();
    A a3;
    a3=a1*a2;
    a3.show();
}