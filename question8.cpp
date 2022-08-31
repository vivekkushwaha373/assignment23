#include<iostream>
using namespace std;

int main()
{
    float n1,n2,n3;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
    cout<<"the first number is: "<<n1<<endl;
    cout<<"the second number is: "<<n2;
    return 0;
}
/*
a=a+b;
b=a-b;
a=a-b/2;
*/