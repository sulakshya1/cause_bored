#include<iostream>
using namespace std;
class student{
public:
string name,dob;
int roll,dis;
void getdata(){
    cout<<"enter your name:\n";
    cin>>name;
    cout<<"birth date:\n";
    cin>>dob;
    cout<<"enter your roll no:\n";
    cin>>roll;
}
void discount(){
    cout<<"enter your grade:\n";
    cin>>dis;
    if(dis>=90){
        dis=25;
    }
    else if(dis<90 && dis>80){
        dis=10;
    }
    else{
        dis=0;
    }
}
virtual void dispresult(){
    cout<<"name:"<<name<<endl;
    cout<<"dob:"<<dob<<endl;
    cout<<"roll:"<<roll<<endl;
    cout<<"discount:"<<dis<<"% off"<<endl;
}
};
class pg:public student{
public:
void dispresult(){    
    cout<<"name:"<<name<<endl;
    cout<<"dob:"<<dob<<endl;
    cout<<"roll:"<<roll<<endl;
    cout<<"discount:"<<dis<<"% off"<<endl;
    }
};
class ug:public student{
public:
void dispresult(){    
    cout<<"name:"<<name<<endl;
    cout<<"dob:"<<dob<<endl;
    cout<<"roll:"<<roll<<endl;
    cout<<"discount:"<<dis<<"% off"<<endl;
    }
};
int main(){
    student *sptr;
    pg p;
    ug u;
    sptr=&p;
    sptr->getdata();
    sptr->discount();
    sptr->dispresult();
    sptr=&u;
    sptr->getdata();
    sptr->discount();
    sptr->dispresult();
    return 0;
}