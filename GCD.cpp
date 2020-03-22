#include<iostream>
using namespace std;
int main()
{
    int num1,num2,gcd=0,i;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    for(i=1;i<=num1&&i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD of the number is : "<<gcd;
}
