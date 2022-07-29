#include<iostream>
#include<math.h>
using namespace std;
class polar{
    public:
    float r,theta;
    polar(float a,float b){
        r=a;
        theta=b;
    }
    void display(){
        cout<<"radius:"<<r<<endl;
        cout<<"angle:"<<theta<<endl;
    }
    float get_radius(){
        return r;
    }
    float get_angle(){
        return theta;
    }
};
class rectangle{
    public:
    float x,y;
    rectangle(float a, float b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
    }
    void operator =(polar p1){
        float radius=p1.get_radius();
        float angle=p1.get_angle();
        x=radius*cos(angle*3.14/180);
        y=radius*sin(angle*3.14/180);
    }
};
int main(){
    polar p1(20,45);
    p1.display();
    rectangle r1(0,0);
    r1=p1;
    r1.display();
    return 0;
}