#include<iostream>
using namespace std;
class complex{
    public:
    int real,imag;
    complex(){};
    complex(int a, int b){
        real=a;
        imag=b;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator +(complex c2){
        complex c3;
        c3.real=real+c2.real;
        c3.imag=imag+c2.imag;
        return c3;
    }
    complex operator -(complex c2){
        complex c4;
        c4.real=real-c2.real;
        c4.imag=imag-c2.imag;
        return c4;
    }
};
int main(){
    complex c1(1,2),c2(3,4);
    c1.display();
    c2.display();
    complex c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    c3.display();
    c4.display();
}