#include<iostream>
using namespace std;
void function(int x, int y)
{
    cout<<"Inside function"<<endl;
    try
    {
        if(y == 0)
        {
            throw y;
        }
        else
        {
            cout<<"Division:- "<<(x/y)<<endl;
        }
    }
    catch(int i)
    {
        cout<<"Caught Integer inside function"<<endl;
        throw;
    }
    cout<<"End of function"<<endl;
}
int main()
{
    cout<<"Inside main Function"<<endl;
    try
    {
        function(10,5);
        cout<<endl;
        function(10,0);

    }
    catch(int no)
    {
        cout<<"Caught integer inside Main "<<no<<endl;
    }
    cout<<"End of Main Function"<<endl<<endl;
    return 0;
}
/*Output:-

Inside main Function
Inside function
Division:- 2
End of function

Inside function
Caught Integer inside function
Caught integer inside Main 0
End of Main Function
*/
