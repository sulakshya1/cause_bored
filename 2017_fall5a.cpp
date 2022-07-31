#include<iostream>
#include<string.h>
using namespace std;
class cat{
    public:
    char name[20];
    void get(){
        cout<<"enter your name\n";
        cin>>name;
    }
    cat operator+(cat c2){
        cat c3;
        strcat(name,c2.name);
        strcpy(c3.name,name);
        return c3;
    }
    void display(){
        cout<<"name:"<<name<<endl;
    }
};
int main(){
    cat c1,c2,c3;
    c1.get();
    c2.get();
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}