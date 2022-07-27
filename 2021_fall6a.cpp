#include<iostream>
using namespace std;
class complex{
    public:
    int real,imaginary;
    complex(){
        real=0;
        imaginary=0;
    };
    complex(int r, int i){
        real=r;
        imaginary=i;
    }
    complex operator ++(){
        ++real;
        ++imaginary;
    }
    complex operator +(complex c2){
        complex c3;
        c3.real=real+c2.real;
        c3.imaginary=imaginary+c2.imaginary;
        return c3;
    }
    void display1(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main(){
    complex c1(10,20),c2(20,30);
    complex c3;
    ++c1;
    ++c2;
    c3=c1+c2;
    c1.display1();
    c2.display1();
    c3.display1();
    return 0;
}