#include<iostream>
using namespace std;
int main()
{
    int temp,pro=1,num,div;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        div=num%10;
        pro=pro*div;
        num/=10;
    }
    cout<<"Product of the given numbers digit is: "<<pro;
}
