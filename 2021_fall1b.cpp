#include<iostream>
using namespace std;
void simple(int p=0,int t=0,float r=0.8){
    float si;
    si=(p*t*r)/100;
    cout<<"your intrest is:"<<si;
}
int main(){
    int p,t;
    cout<<"enter your principal and time\n";
    cin>>p>>t;
    simple(p,t);
    return 0;
}