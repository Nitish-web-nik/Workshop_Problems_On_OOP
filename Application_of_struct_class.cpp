#include<iostream>
#include<string>
using namespace std;
class myClass
{
    public:
    int myInt = 0;
    bool myBool = false;
    string getString()
    {
        return "Hello World!";
    }
};
struct myStruct
{
    int myInt = 0;
    bool myBool = false;
    string getString()
    {
        return "Hello Nitish";
    }
};
int main()
{
    myClass classObj;
    cout<<classObj.myInt<<endl;
    cout<<classObj.myBool<<endl;
    cout<<classObj.getString()<<endl;
    myStruct structObj;
    cout<<structObj.myInt<<endl;
    cout<<structObj.myBool<<endl;
    cout<<structObj.getString()<<endl;
    return 0;
}
