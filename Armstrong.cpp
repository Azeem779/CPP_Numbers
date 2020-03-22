#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num/=10;
    }
    if(temp==sum)
    {
        cout<<"Armstrong number.";
    }
    else
    {
        cout<<"Not an  Armstrong number.";
    }
}
