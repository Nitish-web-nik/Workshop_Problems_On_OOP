/**Write a C++ program to calculate area of rectangle using class and object.**/

#include<iostream>
using namespace std;
class Rectangle
{
public:
    calculateArea(float length, float breadth)
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle obj;
    float len, bre, area;
    cout<<"Enter the length of the Rectangle"<<endl;
    cin>>len;
    cout<<"Enter the breadth of the Rectangle"<<endl;
    cin>>bre;
    cout<<"The Area of the Rectangle is "<<obj.calculateArea(len, bre);
    return 0;
}
/**
Enter the length of the Rectangle
4
Enter the breadth of the Rectangle
6
The Area of the Rectangle is 24
**/
