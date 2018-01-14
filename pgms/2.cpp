#include<iostream>
using namespace std;
 
int fun(const int &x)
{
    return x;
}
int main()
{
int a=10;
    cout << fun(10);
    return 0;
}
