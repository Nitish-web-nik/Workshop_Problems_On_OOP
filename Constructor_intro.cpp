#include<iostream>
using namespace std;
class myClass
{
public:
    myClass()
    {
        cout<<"Constructor is Called "<<endl;
         myInt = 5;
    }
    ~myClass()
    {
        cout<<"Destructor is called "<<endl;
    }
 int myInt = 0;
};
int main()
{
    cout<<"____________APPLICATION BEGINS OF CONSTRUCTOR___________"<<endl;
    myClass myObj;
    cout<<"The value of the Constructur is "<<myObj.myInt<<endl;

    return 0;
}
