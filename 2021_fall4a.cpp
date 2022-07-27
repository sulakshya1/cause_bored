/*ambiguity bhaneko 2 ta parent class ma eutai function bhako case ma huncha 
kun function choose garne bhanera confuse huncha teii bhara "obj.class name::function();" 
yo use garna parcha*/
#include<iostream>
using namespace std;
class hand{
    public:
    void part(){
        cout<<"o=|=o"<<endl;
    }
};
class leg{
    public:
    void part(){
        cout<<"_| |_";
    }
};
class person:public hand,public leg{
    public:
    void head(){
        cout<<"  O  "<<endl;
    }
};
int main(){
    person man;
    man.head();
    man.hand::part();
    man.leg::part();
}