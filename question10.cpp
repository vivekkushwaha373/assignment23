#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0;
    for(int i=0;i<10;i++)
    {
        cout<<"enter number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum= "<<sum;

    return 0;
}