#include<iostream>
using namespace std;
int main()
{
    int temp,sum=0,num,div;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        div=num%10;
        sum=sum+div;
        num/=10;
    }
    cout<<"Sum of the given numbers digit is: "<<sum;
}
