#include<iostream>
 
using namespace std;
 
class Base
{
public:
   virtual int fun()
    {
        cout<<"Base::fun() called";
    }
    int fun(int i)
    {
        cout<<"Base::fun(int i) called";
    }
};
 
class Derived: public Base
{
public:
    int fun()
    {
        cout<<"Derived::fun() called";
    }
};
 
int main()
{
Base *p;

    Derived d;
p=new Derived;
    d.fun();  // Compiler Error
p->fun();
    return 0;
}
