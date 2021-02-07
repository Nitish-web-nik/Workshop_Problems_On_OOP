#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int roll;
    char name[39];
public:
    void getdata(int x, char y[] )
    {
        roll = x;
        strcpy(name, y);
    }
    void putdata()
    {
        cout<<"Student's Name "<<name<<endl;
        cout<<"Student's Roll "<<roll<<endl;
    }
};

int main()
{
    Student obj;
    Student *p ;
    p = &obj;
    p->getdata(05, "Nitish");
    p->putdata();
    return 0;
}
/*Output:-
Student's Name Nitish
Student's Roll 5

*/
