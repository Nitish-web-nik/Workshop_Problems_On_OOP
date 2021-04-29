#include <iostream>
using namespace std;

class Student
{
    int roll;
public:
    void getroll(int x)
    {
        roll = x;
    }
    void putroll()
    {
        cout<<"Roll number = "<<roll<<endl;
    }
};


class Marks:public Student
{
protected:
    float t1, t2;
public:
    void getmarks(float x, float y)
    {
        t1 = x;
        t2 = y;
    }
    void putmarks()
    {
        cout<<"Marks in 1st subject = "<<t1<<endl;
        cout<<"Marks in 2nd subject = "<<t2<<endl;
    }
};

class Sports
{
protected:
    float sp;
public:
    void getsp(float x)
    {
        sp = x;
    }
    void putsp()
    {
        cout<<"Marks of the sports = "<<sp<<endl;
    }
};

class Result:public Marks, public Sports
{
    float total;
public:
    void disp();
};
void Result::disp()
{
    total = t1 + t2 + sp;
    putroll();
    putmarks();
    putsp();
    cout<<"Total score = "<<total<<endl;
}


int main()
{
    Result obj;
    obj.getroll(05);
    obj.getmarks(95.8, 94.8);
    obj.getsp(90.3);
    obj.disp();
    return 0;
}
/*Output:-
Roll number = 5
Marks in 1st subject = 95.8
Marks in 2nd subject = 94.8
Marks of the sports = 90.3
Total score = 280.9
*/
