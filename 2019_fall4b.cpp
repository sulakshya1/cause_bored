/*When two or more objects are derived from a common base class, 
we can prevent multiple copies of the base class being present in an object derived from 
those objects by declaring the base class as virtual when it is being inherited. 
Such a base class is known as virtual base class.*/
#include<iostream>
using namespace std;
class A
{
   public:
       int i;
};

class B : virtual public A
{
   public:
       int j;
};

class C: virtual public A
{
   public:
       int k;
};

class D: public B, public C
{
   public:
       int sum;
};

int main()
{
   D ob;
   ob.i = 10;
   ob.j = 20;
   ob.k = 30;
   ob.sum = ob.i + ob.j + ob.k;
   cout << "Value of i is : "<< ob.i<<"\n";
   cout << "Value of j is : "<< ob.j<<"\n"; cout << "Value of k is :"<< ob.k<<endl;
   cout << "Sum is : "<< ob.sum <<endl;

   return 0;
}