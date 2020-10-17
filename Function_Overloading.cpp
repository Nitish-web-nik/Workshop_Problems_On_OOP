#include<iostream>
using namespace std;

void multiply(int a, int b)
{
    cout<<"this is overloaded function for int"<< endl;
}
void multiply(float a, float b)
{
    cout<<"This is overloaded function for float"<<endl;
}
void multiply(double a, double b)
{
    cout<< "This is overloaded function for double";
}
int main()
{
    multiply(4,6);
    multiply(4.3f, 5.2f);
    multiply(4.3, 6.2);
    return 0;
}
