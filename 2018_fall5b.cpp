#include<iostream>
using namespace std;
class person{
    public:
    string name,address;
    int age;
    person(){
        cout<<"enter your name:\n";
        cin>>name;
        cout<<"enter your age:\n";
        cin>>age;
        cout<<"enter your address:\n";
        cin>>address;
    }
    void showdata(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"address:"<<address<<endl;
    }
};
class teacher:public person{
    public:
    string qualification,department;
    teacher():person(){
        cout<<"enter your qualifiction:\n";
        cin>>qualification;
        cout<<"enter your department:\n";
        cin>>department;
    }
    void showdata(){
        cout<<"qualification:"<<qualification<<endl;
        cout<<"department:"<<department<<endl;
    }
};
class student:public person{
    public:
    string program,semester;
    student():person(){
        cout<<"enter your program:\n";
        cin>>program;
        cout<<"enter your semester:\n";
        cin>>semester;
    }
    void showdata(){
        cout<<"qualification:"<<program<<endl;
        cout<<"department:"<<semester<<endl;
    }
};
int main(){
    student s;
    s.person::showdata();
    s.showdata();
    teacher t;
    t.person::showdata();
    t.showdata();
    return 0;
}