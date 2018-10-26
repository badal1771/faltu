#include <iostream>
using namespace std;
int main()
{float arr[5];
int i;
cout<<"enter the 5 number "<<endl;
for (i=0;i<5;i++)
{cin>>*(arr+i);}
cout<<"the 5 numbers are "<<endl;
for (i=0;i<5;i++)
{cout<<"display 5 numbers "<<*(arr+i)<<endl;
}
return 0;}
