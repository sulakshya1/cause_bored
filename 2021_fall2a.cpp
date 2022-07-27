//no it doesn't
#include<iostream>
using namespace std;
class b;
class a{
    private:
    int x;
    public:
    a(){
        cout<<"enter one number"<<endl;
        cin>>x;
    }
    friend void add(a,b);
};
class b{
    private:
    int y;
    public:
    b(){
        cout<<"enter another number"<<endl;
        cin>>y;
    }
    friend void add(a,b);
};
void add(a a1,b b1){
    int sum;
    sum=a1.x+b1.y;
    cout<<"the sum of two number is:"<<sum<<endl;
}
int main(){
    a a2;
    b b2;
    add(a2,b2);
}