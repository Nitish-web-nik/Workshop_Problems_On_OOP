/**Write a C++ program using for loop to calculate the value of investment.**/
#include<iostream>
using namespace std;
int main()
{
    float amount, rate , SimpleInterest;
    int time, i;
    cout<<"Enter your Amount , Rate% and Time"<<endl;
    cin>>amount>>rate>>time;
    {
        for(i = 1; i <= time; i++)
        {
            SimpleInterest = (amount * rate * time)/100;
            amount = amount + SimpleInterest;
            cout<<"After "<<i<< " year: Your Investment is "<<amount<<endl;
        }
    }


    return 0;
}
/**Input:
Enter your Amount , Rate% and Time
500
3.4
4
Output:
After 1 year: Your Investment is 568
After 2 year: Your Investment is 645.248
After 3 year: Your Investment is 733.002
After 4 year: Your Investment is 832.69
**/
