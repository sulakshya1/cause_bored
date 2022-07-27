//exception handeling try throw catch describe garne
#include<iostream>
using namespace std;
int main(){
    try{
        int a,b;
        float div;
        cout<<"enter any two numbers"<<endl;
        cin>>a>>b;
        if(b==0){
            throw 0;
        }
        else{
            div=a/b;
            cout<<"div:"<<div;
        }
    }
    catch(int c){
        cout<<"math error";
    }
    return 0;
}