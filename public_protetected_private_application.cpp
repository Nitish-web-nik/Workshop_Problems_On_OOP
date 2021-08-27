#include<iostream>
using namespace std;

class myClass
{
public:
    int mypublicInt = 0;
protected:
    int myprotectedInt = 0;
private:
    int myprivateInt = 0;
};
int main()
{
    myClass myObj;
    cout<<myObj.mypublicInt<<endl;
    cout<<myObj.myprotectedInt<<endl;
    cout<<myObj.myprivateInt<<endl;
}
//This program will throw an error because we can't access protected and private variables outside the class

