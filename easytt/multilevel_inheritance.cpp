#include<iostream>
using namespace std;


class st
{
protected:
    int roll;
public:
    void get_roll(int);
    void put_roll();
};
void st::get_roll(int x)
{
    roll = x;
}
void st::put_roll()
{
    cout<<"Roll number "<<roll<<endl;
}


class test:public st
{
protected:
    float m1, m2;
public:
    void get_marks(float,float);
    void put_marks();
};
void test::get_marks(float x, float y)
{
    m1 = x;
    m2 = y;
}
void test::put_marks()
{
    cout<<"Marks in sub1 "<<m1<<endl;
    cout<<"Marks in sub2 "<<m2<<endl;
}

class result:public test
{
    int total;
public:
    void display();
};
void result::display()
{
    total = m1 + m2; // We can directly use m1 and m2 because we have defined them in protected
    put_roll();
    put_marks();
    cout<<"Total = "<<total<<endl;
}
int main()
{
    result obj;
    obj.get_roll(05);
    obj.get_marks(78.7,45.8);
    obj.display();
    return 0;
}
/*Output:-
Roll number 5
Marks in sub1 78.7
Marks in sub2 45.8
Total = 124
*/
