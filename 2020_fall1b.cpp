#include<iostream>
using namespace std;
class B;
class A{
    int a,b;
    public:
    void data(){
        cout<<"enter any two number";
        cin>>a>>b;
    }
    friend void swap(A);
};
void swap(A a1){
    int c;
    cout<<"before swaping:\n"<<a1.a<<endl<<a1.b<<endl;
    c=a1.a;
    a1.a=a1.b;
    a1.b=c;
    cout<<"after swaping:\n"<<a1.a<<endl<<a1.b<<endl;

}
int main(){
    A a1;
    a1.data();
    swap(a1);
    return 0;
}