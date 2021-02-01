#include<iostream>
using namespace std;

class Test
{
    int no;
    static int count;
public:
    void getno(void);
    void showno(void);
    static void showcount(void);
};
void Test::getno(void)
{
    no = ++count;
}
void Test::showno(void)
{
    cout<<"Object number is "<<no<<endl;
}
void Test::showcount(void)
{
    cout<<"The value of count is :- "<<count<<endl;
}
int Test::count;
int main()
{
    Test t1,t2;
    t1.getno();
    t2.getno();
    Test::showcount();//This is how to access static member function
    Test t3;
    t3.getno();
    Test::showcount();
    t1.showno();
    t2.showno();
    t3.showno();
    return 0;
}
/*Output
The value of count is :- 2
The value of count is :- 3
Object number is 1
Object number is 2
Object number is 3
*/
