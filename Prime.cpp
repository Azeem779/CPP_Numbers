#include<iostream>
using namespace std;
int main()
{
    int i,num,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0 && num!=1 )
    {
        cout<<"Number is prime.";
    }
    else{
        cout<<"Number is not prime.";
    }
}
