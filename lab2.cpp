//more pointers
#include <iostream>
using namespace std;
int main()
{
    int firstvalue=5,secondvalue=15;
    int *p1,*p2;
    p1= &firstvalue;  //address of first value
    p2 =&secondvalue;//address of second value
    *p1=10;//value to p1
    *p1=*p2;//value pointed by p1=value pointed by p2
    p1=p2;//value of pointer are copied
    *p1=20;
    cout<<"first value"<<firstvalue<<endl;
    cout<<"second value"<<secondvalue<<endl;
    return 0;

}
