#include <iostream>
using namespace std;
class A;
class B
{
    int b;
public:
    void getno(int x)
    {
        b = x;
    }
    void putno(void)
    {
        cout<<"The value of B is "<<b<<endl;
    }
    friend void add(A, B);
};
class A
{
    int a;
public:
    void getno(int x)
    {
        a = x;
    }
    void putno(void)
    {
        cout<<"The value of A is "<<a<<endl;
    }
    friend void add(A, B);
};
void add(A o1, B o2)
{
    cout<<"Addition of A and B is "<<o1.a + o2.b<<endl;
}
int main()
{
    A a;
    B b;
    a.getno(5);
    b.getno(6);
    a.putno();
    b.putno();
    add(a,b);
    
    
    return 0;
}
/*Output:-
The value of A is 5
The value of B is 6
Addition of A and B is 11
*/
