#include<iostream>
using namespace std;
class time3;
class time{
    public:
    int hour,min,sec;
    void get(){
        cout<<"enter time in hour min and sec\n";
        cin>>hour>>min>>sec;
    }
    void display(){
        cout<<"\nhour:"<<hour<<"\nmin:"<<min<<"\nsec:"<<sec;
    }
};
class time2:public time{
    public:
    void add(time t1,time2 t2){
        hour=t1.hour+t2.hour;
        min=t1.min+t2.min;
        sec=t1.sec+t2.sec;
    }
    friend void diff(time2,time3);
};
class time3{
    public:
    int hour,min,sec;
    void get1(){
        cout<<"\nenter time in hour min and sec\n";
        cin>>hour>>min>>sec;
    }
    friend void diff(time2,time3);
};
void diff(time2 t2,time3 t3){
    int hour,min,sec;
    hour=t2.hour-t3.hour;
    min=t2.min-t3.min;
    sec=t2.sec-t3.sec;
    cout<<"\nhour:"<<hour<<"\nmin:"<<min<<"\nsec:"<<sec;
}
int main(){
    time t1;
    t1.get();
    time2 t2;
    t2.get();
    t2.add(t1,t2);
    t2.display();
    time3 t3;
    t3.get1();
    diff(t2,t3);
    return 0;
}