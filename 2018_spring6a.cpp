#include<iostream>
#include<math.h>
using namespace std;
template<class t>
void root(t a,t b,t c){
    float root1=-b+sqrt(b*b-4*a*c);
    root1=root1/(2*a);
    cout<<"roots:"<<root1<<endl;
    float root2=-b-sqrt(b*b-4*a*c);
    root2=root2/(2*a);
    cout<<"roots:"<<root2<<endl;
}
int main(){
    int a,b,c;
    cout<<"enter a,b,c (a X^2 +b X+c)\n";
    cin>>a>>b>>c;
    root(a,b,c);
    return 0;
}
