#include<iostream>
using namespace std;
class Abc
{
    int a,b;
public:
    Abc(int x, int y)
    {
        a = x;
        b = y;
    }
    void disp(void)
    {
        cout<<"The value of A is "<<a<<endl;
        cout<<"The value of B is "<<b<<endl;
    }
};
int main()
{
    Abc t(34,71);
    t.disp();
    return 0;
}
/*Output:-
The value of A is 34
The value of B is 71
*/
