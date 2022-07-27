#include<iostream>
using namespace std;
class c{
    int a;
    public:
    c(){};
    c(int x){
        a=x;
    }
    c(c &y){
        cout<<"a:"<<y.a;
    }
};
int main(){
    c c1;
    c c2(2);
    c c3(c2);
}