#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    int x =(a-b);
    try
    {
        if(x != 0)
        {
            cout<<"Result = "<<(a/(a-b));
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Division by zero"<<endl;
    }
    return 0;
}
/*
Output 1:-
Enter the values of a and b
10
10
Division by zero

Output 2:-
Enter the values of a and b
40
20
Result = 2
*/
