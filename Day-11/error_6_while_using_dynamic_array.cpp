//deleting a dynamic array with delete instead of delete []
#include<iostream>
using namespace std;
struct noisy
{
    noisy()
    {
        cout<<"constructing noisy"<<endl;
    }
    ~noisy()
    {
        cout<<"destroying noisy"<<endl;
    }
};
int main()
{
    noisy * p = new noisy[3];
    delete p;
    return 0;
}
/*problem:[Three noisy instances were constructed,
but only one noisy instance was destroyed, instead of three*/
