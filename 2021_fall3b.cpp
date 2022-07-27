//https://www.geeksforgeeks.org/destructors-c/
//no argument cannot be passed in destructor
#include<iostream>
using namespace std;
class Dec{
    int a;
    public:
    Dec(){
        cout<<"enter any number"<<endl;
        cin>>a;
        cout<<"the value of a:"<<a<<endl;
    }
    ~Dec(){
        cout<<"the value of a:"<<a<<endl;
    }
};
int main(){
    Dec d;
}