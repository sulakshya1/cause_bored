#include<iostream>
using namespace std;
class T{
    private:
    int a,b;
    public:
    T(int x,int y){
        a=x;
        b=y;
        cout<<"a:"<<a<<endl<<"b:"<<b;
    }
};
int main(){
    T t1(1,2);
    return 0;
}