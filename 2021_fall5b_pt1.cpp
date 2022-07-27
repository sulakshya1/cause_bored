//compile time:- function overloading,operator overloading
//runtime:-function overriding
#include<iostream>
using namespace std;
class apple{
    //function over loading
    int a,b,c;
    public:
        void show(){
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    void show(int x,int y){
        a=x,b=y;
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    void show(int x,int y,int z){
        a=x,b=y,c=z;
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl;
    }
};
int main(){
    apple a1; 
    a1.show(10,20);
    a1.show(10,20,30);
}