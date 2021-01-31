#include<iostream>
using namespace std;
long fact(int);
int main()
{
    int no;
    cout<<"Enter a number to find its factorial:- ";
    cin>>no;
    cout<<"Factorial of "<<no<< " is "<<fact(no);
    return 0;
}
long fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }

}
