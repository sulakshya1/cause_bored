#include<iostream>
using namespace std;
class triangle{
    private:
    float height,breadth,area;
    public:
    triangle(){}
    triangle(float x,float y){
        height=x;
        breadth=y;
        area=0.5*breadth*height;
        cout<<"area:"<<area;
    }
};
int main(){
    triangle t(20.1f,30.01f);
    return 0;
}