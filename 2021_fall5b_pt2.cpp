//operator overloading
#include<iostream>
using namespace std;
class apple{
    int a,b;
    public:
    //operator overloading
    apple(){
        a=0;
        b=0;
    }
    apple(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    apple operator +(){
        ++a;
        ++b;
    }
};
int main(){
    //function overloading
    apple a1(1,2); 
    +a1;
    a1.show();
}