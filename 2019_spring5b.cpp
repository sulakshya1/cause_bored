#include<iostream>
using namespace std;
class complex{
    public:
    int real,imaginary;
    complex(){}
    complex(int r, int imag){
        real=r;
        imaginary=imag;
    }
    void show(){
        cout<<"complex number:\n"<<real<<"+"<<imaginary<<"i"<<endl;
    }
    complex operator +(complex c2){
        complex c3;
        c3.real=real+c2.real;
        c3.imaginary=imaginary+c2.imaginary;
        return c3;
    }
};
int main(){
    complex c1(1,2),c2(3,4);
    complex c3;
    c1.show();
    c2.show();
    c3=c1+c2;
    c3.show();
}
