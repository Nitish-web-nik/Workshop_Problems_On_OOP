#include<iostream>
#define AGE_GROUPA 1
#define AGE_GROUPB 2
#define AGE_GROUPC 3
#define AGE_GROUPD 4
using namespace std;
/*Write a function that will accept age as a parameter and return the appropriate group name.
Output the user's name and the group that they have been assigned to.*/
void Age(int age)
{
    if(age < 20)
        cout<<"You are in Group: "<<AGE_GROUPA<<endl;
    else if(age < 40)
        cout<< "You are in Group " <<AGE_GROUPB<<endl;
    else if(age < 60)
        cout<< "You are in Group " <<AGE_GROUPC<<endl;
    else
        cout<< "You are in Group "  <<AGE_GROUPD<<endl;
}
int main()
{
    string name;
    int age;
    cout<<"Enter your name: "<<endl;
    getline(cin, name);
    cout<<"Enter your age: "<<endl;
    cin>> age;
    Age(age);
    cout<< "Your name is "<< name<<endl;
    cout<<"Your age is " << age<< endl;

    return 0;
}
