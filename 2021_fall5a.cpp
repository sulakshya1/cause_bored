//substitutability example
#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"class A:";
    }
};
class B:public A{
    public:
    void display(){
        cout<<"class B:";
    }
};
void test(A a){
    a.display();
}
int main(){
    B b;// B *b;//obj pointer
    //b->display();
    test(b);
}