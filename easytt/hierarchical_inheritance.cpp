#include<iostream>
using namespace std;

class A
{
protected:
    int no;
public:
    void getno()
    {
        cout<<"Enter a number "<<endl;
        cin>>no;
    }
};

class B:public A
{
public:
    void square()
    {
        cout<<"Square of the number is "<<no*no<<endl;
    }
};

class C:public A
{
public:
    void cube()
    {
        cout<<"Cube of the number is "<<no*no*no;
    }
};
int main()
{
    B bobj;;
    C cobj;
    bobj.getno();
    bobj.square();
    cobj.getno();
    cobj.cube();
    return 0;
}
/*Output:-
Enter a number
5
Square of the number is 25
Enter a number
6
Cube of the number is 216
*/
