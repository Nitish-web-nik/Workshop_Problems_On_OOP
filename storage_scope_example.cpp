#include<iostream>
using namespace std;
void fun()
{
    int myInt1 = 1;//This is scope 1
}
int main()
{
    int myInt2 = 2;//This is scope 2
    {
        myInt3 = 3;//This is scope 3
    }
    cout<<myInt1<<endl;//This will give error because this is not in scope 2
    cout<<myInt2<<endl;
    cout<<myInt3<<endl;//This will give error because this is not in scope 2
    return 0;
}
