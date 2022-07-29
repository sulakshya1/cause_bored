#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A(){}
    A(int x){
        a=x;
    }
    A operator ++(){
        ++a;
    }
    A operator --(){
        --a;
    }
    void show(){
        cout<<"a:"<<a<<endl;
    }
};
int main(){
    A a1(1);
    ++a1;
    a1.show();
    --a1;
    a1.show();
    return 0;
}