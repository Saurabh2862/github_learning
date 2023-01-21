#include<iostream>
using namespace std;
int main ()
{
    int arr[6]={23,56,76,42,2,5},key;
    cout<<"Enter the element to dlt"<<endl;
    cin>>key;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==key)
        break;
        else
        {
            cout<<"key not founded";
        }
    }
    return 0;
}