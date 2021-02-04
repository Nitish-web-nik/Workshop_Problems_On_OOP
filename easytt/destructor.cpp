#include<iostream>
using namespace std;
class test
{
    static int count;
public:
    test()
    {
        count++;
        cout<<count<<" Object is created"<<endl;
    }
    ~test()
    {
        cout<<count<<" Object is destroyed"<<endl;
        count --;
    }
};
int test::count;
int main()
{
    cout<<"Main Block"<<endl;
    test t1;
    {
        cout<<"Block-1"<<endl;
        test t2,t3;
        cout<<"End of Block-1"<<endl;
    }
    cout<<"End of Main Block"<<endl;
    return 0;
}
/*Output:-
Main Block
1 Object is created
Block-1
2 Object is created
3 Object is created
End of Block-1
3 Object is destroyed
2 Object is destroyed
End of Main Block
1 Object is destroyed
*/
