//dynamic constructor --constructor bhitra new operator
#include <iostream>
using namespace std;
class A{
    public:
    int *real,*imag;
    A(){
        real=new int;
        imag=new int;
        *real=0;
        *imag=0;
    }
    A(int a,int b){
        real=new int;
        imag=new int;
        *real=a;
        *imag=b;
    }
    A operator +(A a2){
        A a3;
        *a3.real=*real+*a2.real;
        *a3.imag=*imag+*a2.imag;
        return a3;
    }
    void display(){
        cout<<*real<<"+i"<<*imag<<endl;
    }
};
int main(){
    A a1(1,2),a2(3,4);
    a1.display();
    a2.display();
    A a3;
    a3=a1+a2;
    a3.display();
    return 0;
}