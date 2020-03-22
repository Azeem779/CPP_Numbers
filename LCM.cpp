#include<iostream>
using namespace std;
int main()
{
    int num1,num2,maximum;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    maximum=(num1>num2)?num1:num2;
    while(1)
    {
        if((maximum%num1==0)&&(maximum%num2==0))
        {
            cout<<"LCM of the numbers is "<<maximum;
            break;
        }
        maximum++;
    }
}
