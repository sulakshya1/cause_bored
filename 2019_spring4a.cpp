#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void get_data(){
        cout<<"enter your name:\n";
        cin>>name;
        cout<<"age:\n";
        cin>>age;
    }
    void display_data(){
        cout<<"name:"<<name<<endl<<"age:"<<age<<endl;
    }
};
class student:public person{
    public:
    int roll;
    void get_roll(){
        cout<<"enter your roll no:\n";
        cin>>roll;
        cout<<"roll:"<<roll<<endl;
    }
    student(){
        person p;
        p.get_data();
        p.display_data();
    }
};
class employee:public person{
    public:
    int id;
    void get_id(){
        cout<<"enter your id no.:\n";
        cin>>id;
        cout<<"id:"<<id<<endl; 
    }
    employee(){
        person p;
        p.get_data();
        p.display_data();
    }
};
int main(){
    employee e;
    e.get_id();
    student s;
    s.get_roll();
    return 0;
}
