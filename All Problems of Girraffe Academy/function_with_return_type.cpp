#include <iostream>
using namespace std;
double cube(double);//function prototype/declaration
int main()
{
    cout<<cube(3.4);//function call
    return 0;
}
double cube(double num)//function definition
{
    return num * num * num;
    cout<<"Note:- This is will not printed on console";
}
/* Output:- 39.304   */
