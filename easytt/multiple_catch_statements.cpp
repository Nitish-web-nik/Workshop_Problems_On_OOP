#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x > 0)
        {
            throw x;
        }
        else
        {
            throw 'x';
        }
    }
    catch(int no)
    {
        cout<<"Caught an integer "<<no<<endl;
    }
    catch (char ch)
    {
        cout<<"Caught a character "<<ch<<endl ;
    }
}
int main()
{
    cout<<"Multiple Catch Statements "<<endl;
    cout<<"X is greater than 0"<<endl;
    test(5);
    cout<<"X is smaller than 0"<<endl;
    test(-2);
    return 0;
}
/*Output:-
Multiple Catch Statements
X is greater than 0
Caught an integer 5
X is smaller than 0
Caught a character x
*/
