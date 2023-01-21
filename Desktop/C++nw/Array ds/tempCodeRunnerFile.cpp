#include<iostream>
using namespace std;

inline int add(int a,int b,int z=0,int y=0)
{
    return (a+b+z+y);
}
int main ()
{
    
    cout<<" Sum of 9 , 99 and 999 = "<<add(9,99,999,9999)<<endl;
    return 0; 
}