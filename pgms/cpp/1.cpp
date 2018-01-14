#include <iostream>
#include <string>
#include <sstream>
using namespace std;

main()
{
float i;
 string mystrn;
 cout<<"enter"<<endl;
 getline(cin,mystrn);
stringstream(mystrn)>>i;
cout <<i<<endl;



}
