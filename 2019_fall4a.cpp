#include<iostream>
using namespace std;
class university{
    public:
    string name,location;
    university(){
        cout<<"enter name, location:\n";
        cin>>name>>location;
    }
    void display1(){
        cout<<"name:"<<name<<endl<<"location:"<<location<<endl;
    }
};
class af_college:virtual public university{
    public:
    string cname,address;
    int noprog;
    af_college():university(){
        cout<<"enter college name and address\n";
        cin>>cname>>address;
        cout<<"enter no of program:\n";
        cin>>noprog;
    }
    void display2(){
        cout<<"college name:"<<cname<<endl<<"address:"<<address<<endl<<"no of pro:"<<noprog<<endl;
    }
};
class const_college:virtual public university{
    public:
    string school,dean,name_prog;
    const_college():university(){
        cout<<"enter school name and dean,name_prog\n";
        cin>>school>>dean>>name_prog;
    }
    void display3(){
        cout<<"school:"<<school<<endl<<"dean:"<<dean<<endl<<"name of prog:"<<name_prog<<endl;     
    }
};
class student:public af_college,public const_college{
    public:
    string sname,program;
    int enrolled_year;
    student():af_college(),const_college(){
        cout<<"enter sname,program\n";
        cin>>sname>>program;
        cout<<"enrolled year:\n";
        cin>>enrolled_year;
    }
    void display4(){
        cout<<"school name:"<<sname<<endl<<"program:"<<program<<endl<<"enrolled year:"<<enrolled_year;
    }
};
int main(){
    student s;
    s.display1();
    s.display2();
    s.display3();
    s.display4();
    return 0;
}