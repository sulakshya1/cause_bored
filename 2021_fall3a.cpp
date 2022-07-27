//yes argument pass garda diff. number of argument pass garna parcha
#include<iostream>
using namespace std;
class arg{
    private:
    int a,b,c;
    public:
    arg(int x,int y){//duita argument pass bhako 
        a=x;
        b=y;
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
    }
    arg(int x, int y, int z){//tinta argument huda
        a=x;
        b=y;
        c=z;
        cout<<"........."<<endl;
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
        cout<<"value of c:"<<c<<endl;
    }
};
int main(){
    arg a(10,20),b(11,20,30);
}