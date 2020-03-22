#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    while(1)
    {
        num=num%10;
        break;
    }
    cout<<"Last digit of the number is: "<<num;
}
