#include<iostream>
 
using namespace std;
 
class Test {
  private:   
    int y;
    int x;   
  public:
    Test() : y(20), x(10) 
{
}
    void print();
};
 
void Test::print()
{
   cout<<"x = "<<x<<" y = "<<y;
}
 
int main()
{
    Test t;
    t.print();
//    getchar();
    return 0;   
}
