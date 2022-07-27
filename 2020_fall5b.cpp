#include<iostream>
using namespace std;
template <class t>
void display(t a, t b){
    cout<<"after swap:\n";
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}
template <class t>
void swap(t a, t b){
    cout<<"before swap\na:"<<a<<endl<<"b:"<<b<<endl;
    t c;
    c=a;
    a=b;
    b=c;
    display(a,b);
}
int main(){
    swap(1.1,2.2);
    swap('a','b');
}