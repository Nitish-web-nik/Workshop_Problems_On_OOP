#include<iostream>
#include<memory>//unique_ptr is defined in memory header file
#include<cstring>
using namespace std;

struct noisy
{
    noisy(){cout<<"Default Constructing noisy "<<endl;}
    noisy (int i){cout<<"Constructing noisy  arg: "<<i<<endl;}
    ~noisy(){cout<<"Destroying noisy"<<endl;}
};
int main()
{
    unique_ptr<noisy> u1(new noisy);
    unique_ptr<noisy> u2;
    u2.reset(new noisy(100));
    unique_ptr<noisy[]> u3(new noisy[3]);
    unique_ptr<noisy[]> u4(new noisy[2]{1});
    unique_ptr<noisy> u5;
    cout<<"before transferring of ownership u1 = "<<u1.get()<<" , u5 = "<<u5.get()<<endl;
    u5.reset(u1.release());
    cout<<"after transferring of ownership u1 = "<<u1.get()<<" , u5 = "<<u5.get()<<endl;
    u1 = move(u5);//transferring ownership back to u1 from u5
    cout<<"after second transfer u1 = "<<u1.get()<<", u5 = "<<u5.get()<<endl;
    unique_ptr<char[]> buf(new char[20]);
    strcpy(buf. get(), "nitish");
    cout<<"buf = " <<buf.get()<<endl;
    return 0;
}
/*Output:-
Default Constructing noisy
Constructing noisy  arg: 100
Default Constructing noisy
Default Constructing noisy
Default Constructing noisy
Constructing noisy  arg: 1
Default Constructing noisy
before transferring of ownership u1 = 0xb614e0 , u5 = 0
after transferring of ownership u1 = 0 , u5 = 0xb614e0
after second transfer u1 = 0xb614e0, u5 = 0
buf = nitish
Destroying noisy
Destroying noisy
Destroying noisy
Destroying noisy
Destroying noisy
Destroying noisy
Destroying noisy
*/

/*Benefit of Using Smart pointer:- The smart pointers kept track of things and deleted the dynamic variables they owned automatically.*/
