#include<iostream>
using namespace std;
int main()
{
    int num,firstdigit;
    cout<<"Enter the number: ";
    cin>>num;
    firstdigit=num;
    while(firstdigit>=10)
    {
        firstdigit=firstdigit/10;
    }
    cout<<"First digit of the given number is: "<<firstdigit;
}
