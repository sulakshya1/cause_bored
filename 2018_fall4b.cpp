#include<iostream>
using namespace std;
class convert{
    private:
    int feet;
    float inches;
    public:
    convert(){}
    convert(int a, float b){
        feet=a;
        inches=b;
    }
    void display(){
        cout<<"\nfeet:"<<feet;
        cout<<"\ninches:"<<inches;
    }
    operator float(){
        float f=inches/12;
        f=f+feet;
        return(f/3.28084);
    }
};
int main(){
    convert c(6,11.1);
    c.display();
    float m=c;
    cout<<"\nmeter:"<<m;
    return 0;
}