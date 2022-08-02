#include<iostream>
using namespace std;
class time{
    public:
    int hour,min,sec;
    time(){}
    time(int a,int b,int c){
        hour=a;
        min=b;
        sec=c;
    }
    void display(){
        cout<<"time:"<<hour<<":"<<min<<":"<<sec<<endl;
    }
    void add(time t1,time t2){
        time t3;
        t3.hour=t1.hour+t2.hour;
        t3.min=t1.min+t2.min;
        t3.sec=t1.sec+t2.sec;
        if(t3.sec>60){
            while (t3.sec>60)
            {
            ++t3.min;
            t3.sec=t3.sec-60;
            }
            
        }
        if(t3.min>60){
            while(t3.min>60){
            ++t3.hour;
            t3.min=t3.min-60;
            }
        }
        if(t3.hour>24){
            while(t3.hour>24){
            t3.hour=t3.hour-24;
            }
        }
        t3.display();
    }
};
int main(){
    time t1(2,55,55),t2(5,10,100);
    time t3;
    t3.add(t1,t2);
    return 0;
}