//Not Deleting a dynamic variable
#include<iostream>
using namespace std;
int main()
{
    char* p = new char[10];
    p[0] = '!';
    cout<<"p[0] = "<<p[0];
    delete [] p;
    //If we don't use the line number 9 then it will lead to memory leak and results
    // to system crash
    return 0;
}
