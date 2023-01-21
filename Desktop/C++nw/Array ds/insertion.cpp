#include<iostream>
using namespace std;
int main ()
{
    int arr[]={2,34,56,87,67},n=5;
    int num,pos;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Enter the posotion"<<endl;
    cin>>pos;
    if(pos==5)
    {
        cout<<"Array is its maximum size ,insertion is not possible"<<endl;

    }
else{
    int x=pos-1;
    for(int i=n-1;i>=x;i--)
    {
        arr[i+1]=arr[i]; 

         arr[x]=num;
    }
}
    cout<<"Now array is "<<endl;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}