#include<iostream>
using namespace std;

int main ()
{
    int n,arr[n],m,flag=0;
    cout<<" Enter the size of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element u wants to serch"<<endl;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            cout<<m<<" founded at "<<i;
            flag++;
        }
    }
     if(flag==0)
        {
            cout<<m<<" not founded";
        }
    return 0;
}