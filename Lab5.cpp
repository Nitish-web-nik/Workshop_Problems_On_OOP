/**Write a C++ program to add two values of different data types using static polymorphism.**/
#include<iostream>
using namespace std;

class Base
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Base obj;
    cout<<"Addition of two integers "<<obj.add(21,6)<<endl;
    cout<<"Addition of two floating point values "<<obj.add(4.5, 7.1);
    return 0;
}
/**
Output:-
Addition of two integers 27
Addition of two floating point values 11.6
**/
