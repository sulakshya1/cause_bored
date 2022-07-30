#include<iostream>
using namespace std;
class abc{
    private:
    int a,b;
    public:
    void display(){
        cout<<"enter a nad b\n";
        cin>>a>>b;
        cout<<"a:\n"<<a<<"\nb:\n"<<b;
    }
    friend void add(abc);
};
void add(abc a2){
    cout<<"\nsum:"<<a2.a+a2.b;
}
int main(){
    abc a1;
    a1.display();
    add(a1);
}