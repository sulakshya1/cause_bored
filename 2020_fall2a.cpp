#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    inline void abd(){
        cout<<"enter two number\n";
        cin>>a>>b;
        cout<<"a:"<<a<<endl<<"b:"<<b;
    }
};
int main(){
    A a;
    a.abd();
    return 0;
}