#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter the number: ";
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }
}
