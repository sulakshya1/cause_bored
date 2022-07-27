#include<iostream>
using namespace std;
class abc{
    public:
    virtual void show(){
        cout<<"abc:";
    }
};
class a:public abc{
    void show(){
        cout<<"a:\n";
    }
};
int main(){
    abc *ptr,a2;
    a a1;
    ptr=&a1;
    ptr->show();
    a2.show();
}