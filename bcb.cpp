#include <iostream>
using namespace std;
int main()
{float arr[5];
float *p;
int i;
cout<<"the addresss of data given is "<<endl;
for (i=0;i<5;++i)
{cout <<i<<"-"<<&arr[i]<<endl;}
p=arr;
cout<<"give data"<<endl;
for(i=0;i<5;i++)
{cout<<p +i<<endl;}
return 0;
}

