//write cha tara ramrori mileko chaina
#include<iostream>
#include<string.h>
using namespace std;
class name{
    private:
    char firstname[10],secondname[10];
    public:
    name(){}
    name(char a[10],char b[10]){
        strcpy(firstname,a);
        strcpy(secondname,b);
        strcat(firstname,secondname);
        cout<<"name:"<<firstname;
    } 
};
int main(){
    name n1("sulakshya","khatiwada");
    return 0;
}