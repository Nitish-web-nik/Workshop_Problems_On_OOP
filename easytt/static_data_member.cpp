#include<iostream>
using namespace std;

class Test
{
    int no;
    static int count;
public:
    getdata(int);
    showdata(void);
};
int Test::getdata(int x)
{
    no = x;
    cout<<"Number = "<<no<<endl;
    count++;
}
int Test::showdata()
{
    cout<<"Count = "<<count<<endl;
}
int Test::count;
int main()
{
    Test t1,t2,t3;
    t1.showdata();
    t2.showdata();
    t3.showdata();
    t1.getdata(5);
    t2.getdata(4);
    t3.getdata(3);
    t1.showdata();
    t2.showdata();
    t3.showdata();
    return 0;
}
/*or 

#include<iostream>
using namespace std;

class Test
{
    int no;
    static int count;
public:
    void getdata(int);//if we don't declare as a void return type then by default it becomes of int type
    void showdata(void);
};
void Test::getdata(int x)
{
    no = x;
    cout<<"Number = "<<no<<endl;
    count++;
}
void Test::showdata()
{
    cout<<"Count = "<<count<<endl;
}
int Test::count;
int main()
{
    Test t1,t2,t3;
    t1.showdata();
    t2.showdata();
    t3.showdata();
    t1.getdata(5);
    t2.getdata(4);
    t3.getdata(3);
    t1.showdata();
    t2.showdata();
    t3.showdata();
    return 0;
}
/*Output:-
#include<iostream>
using namespace std;

class Test
{
    int no;
    static int count;
public:
    void getdata(int);
    void showdata(void);
};
void Test::getdata(int x)
{
    no = x;
    cout<<"Number = "<<no<<endl;
    count++;
}
void Test::showdata()
{
    cout<<"Count = "<<count<<endl;
}
int Test::count;
int main()
{
    Test t1,t2,t3;
    t1.showdata();
    t2.showdata();
    t3.showdata();
    t1.getdata(5);
    t2.getdata(4);
    t3.getdata(3);
    t1.showdata();
    t2.showdata();
    t3.showdata();
    return 0;
}
/*Output:-
Count = 0
Count = 0
Count = 0
Number = 5
Number = 4
Number = 3
Count = 3
Count = 3
Count = 3
*/

*/

*/
/*Output:-
Count = 0
Count = 0
Count = 0
Number = 5
Number = 4
Number = 3
Count = 3
Count = 3
Count = 3
*/
