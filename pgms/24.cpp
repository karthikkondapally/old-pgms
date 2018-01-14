#include<iostream>
using namespace std;
 
class Derived;
 
class Base {
private:
     void fun() { cout << "Base Fun"; }
friend int main();
};
 
class Derived: public Base {
public:
    void fun() { cout << "Derived Fun"; }
};
 
int main()
{Derived d;
   Base ptr = d;
   ptr.fun();
   return 0;
}
