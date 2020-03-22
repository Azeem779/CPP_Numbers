#include<iostream>
using namespace std;
int main()
{
    int rev=0,number,div;
    cout<<"Enter the number: ";
    cin>>number;
    while(number>0)
    {
        div=number%10;
        rev=(rev*10)+div;
        number/=10;
    }
    cout<<"Reverse of the number is: "<<rev;
}
