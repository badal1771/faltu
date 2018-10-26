#include <iostream>
using namespace std;
int main()
{int *pc,c;
c=10;
cout<<"addresss of c is"<<&c<<endl;
cout<<"value of c "<<c<<endl;
pc=&c;
cout<<"address of pc "<<pc<<endl;
cout<<"value of pc "<<*pc <<endl;
return 0;}


