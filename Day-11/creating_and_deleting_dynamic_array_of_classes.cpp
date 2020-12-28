#include<iostream>
using namespace std;
struct noisy
{
    noisy()
    {
        cout<<"Constructing noisy"<<endl;
    }
    ~noisy()
    {
        cout<<"Destroying noisy"<< endl;
    }
};
int main()
{
    cout<<"Getting a noisy array"<<endl;
    noisy* pnoisy = new noisy[3];
    cout<<"Deleting noisy array"<<endl;
    delete [] pnoisy;
    return 0;
}
