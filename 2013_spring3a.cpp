#include <iostream>
using namespace std;
class time{
private:
    int a,b,c;
public:
    time(){
        a=0;
        b=0;
        c=0;
    };
    time(int hour,int minute,int sec)
    {
        a=hour;
        b=minute;
        c=sec;
    }
    void display(){
        cout<<"hour:"<<a;
        cout<<"\nmin:"<<b;
        cout<<"\nsec:"<<c;
    }
    time operator +(time t1){
        a=a+t1.a;
        b=b+t1.b;
        c=c+t1.c;
    }
};
int main()
{
    time t(10,20,30),t1(20,30,40);
    t+t1;
    t.display();
    return 0;
}