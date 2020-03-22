#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,num;
    cout<<"Enter the number: ";
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<"Number is perfect.";
    }
    else
    {
        cout<<"Number is not perfect.";
    }
}
