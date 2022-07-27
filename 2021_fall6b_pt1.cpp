//data type change garna ko lagi template use huncha 2 ta type ko hucha class template ra function template..
#include<iostream>
using namespace std;
template <class t>
void sum(t a , t b){
    t sum=a+b;
    cout<<"sum:"<<sum<<endl;
}
int main(){
    sum(1,2);
    sum(1.1,2.2);
}