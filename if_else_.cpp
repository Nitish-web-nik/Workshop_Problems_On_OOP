#include<iostream>
using namespace std;
int main()
{
    string input;
    int number;
    cout<< "Enter the Number: "<<endl;
    getline(cin, input);
    number = stoi(input);
    if(number > 10)
        cout<< "The entered number is greater than 10";
    else if(number < 10)
        cout<<"The entered number is less than 10";
    else
        cout<<"The entered number is exactly 10";
    return 0;
}
