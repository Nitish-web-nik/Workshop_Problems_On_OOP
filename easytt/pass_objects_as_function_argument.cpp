#include<iostream>
using namespace std;

class time
{
    int h, m;
public:
    void gettime(int, int);
    void showtime(void);
    void sum(time, time);
};
void time::gettime(int x, int y)
{
    h = x;
    m = y;
}
void time::showtime(void)
{
    cout<<"Hours is "<<h<<endl;
    cout<<"Minutes is "<<m<<"\n"<<endl;
}
void time::sum(time t1, time t2)
{
    m = t1.m + t2.m;
    h = m/60;
    m = m%60;
    h = h + t1.h + t2.h;
}

int main()
{
    time t1,t2,t3;
    t1.gettime(4,50);
    t2.gettime(3,45);
    t3.sum(t1,t2);
    t1.showtime();
    t2.showtime();
    t3.showtime();
    return 0;
}
/*Output
Hours is 4
Minutes is 50

Hours is 3
Minutes is 45

Hours is 8
Minutes is 35
*/
