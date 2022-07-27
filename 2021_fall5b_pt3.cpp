//function overidding
#include<iostream>
using namespace std;
class a{
    public:
    void display(){
        cout<<"apple"<<endl;
    }
};
class b:public a{
    public:
    void display(){
        cout<<"ball";
    }
};
int main(){
    b b1;
    b1.a::display();
    b1.b::display();
}