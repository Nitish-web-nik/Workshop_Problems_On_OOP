#include<iostream>
using namespace std;
class myClass
{
    int myInt= 0;
    public:
     void myFunc()
     {
         myInt++;
         cout<<"My integer is "<<myInt;
     }
};
int main()
{
  myClass classObj;
  classObj.myFunc();
}
