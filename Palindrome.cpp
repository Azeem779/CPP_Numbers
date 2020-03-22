#include<iostream>
using namespace std;
int main()
{
    int temp,num,rem,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if(temp==sum)
    {
        cout<<"Palindrome number.";
    }
    else
    {
        cout<<"Not palindrome number.";
    }
}
