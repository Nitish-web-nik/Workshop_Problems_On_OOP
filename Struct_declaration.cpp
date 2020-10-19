#include<iostream>
using namespace std;
struct myStruct
{
    float x_ordinate = 0 ;
    float y_ordinate = 0;
};
int main()
{
    myStruct structObj;
    structObj.x_ordinate = 2;
    structObj.y_ordinate = 4;
    cout<<"The co-ordinate of the point is: "<<structObj.x_ordinate<<","<<structObj.y_ordinate;
}
