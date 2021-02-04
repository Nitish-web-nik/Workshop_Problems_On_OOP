#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void getval_a(int);
    int get_a();
};
class B:public A /*if we replace public with private then in main function
we can't use directly getval_a because for derived class it will become private(to access it
we have to make another function inside getval_a to access it)..

If we use protected in place of public then without declaring get_a() function we were able to
use that function.

Conclusion:- Protected visibility is the best one to use in single inheritance.
*/
{
    int b,c;
public:

    void getval_b(int);
    void add();
    void dispval();

};
void A::getval_a(int x)
{
    a = x;
}
int A::get_a()
{
    return a;
}
void B::getval_b(int x)
{
    b = x;
}
void B::add()
{
    c = get_a() + b;
}
void B::dispval()
{
    cout<<"Value of A is "<<get_a()<<endl;
    cout<<"Value of B is "<<b<<endl;
    cout<<"Value of C is "<<c<<endl;
}
int main()
{
    int a,b;
    B obj;
    cout<<"Enter the value of A"<<endl;
    cin>>a;
    cout<<"Enter the value of B"<<endl;
    cin>>b;
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.dispval();

    return 0;
}
/*
Enter the value of A
78
Enter the value of B
45
Value of A is 78
Value of B is 45
Value of C is 123
*/
