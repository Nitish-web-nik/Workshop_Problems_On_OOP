#include<iostream>
using namespace std;
int main()
{
    cout<<"Prime Number Checker"<<endl;
    int number;
    cout<<"Enter the number to check whether it is prime or not"<<endl;
    cin>>number;
    if(number<=1)
    {
        cout<<number<<" is not prime."<<endl;
        return 0;
    }
    else if(number ==2 )
    {
        cout<<number <<" is prime."<<endl;
        return 0;

    }
    for(int i = 2; i < number; i++)
    {
        if(number%i ==0)
        {
            cout<<number<<" is not prime."<<endl;
            return 0;
        }
    }

    cout<<number<<" is prime"<<endl;
    return 0;
}
