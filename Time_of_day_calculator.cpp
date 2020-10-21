#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"  *************Time of Day Calculator************"<<endl<<endl;
    cout<<"Enter the time in Military format eg. (1830,1442 etc.)"<<endl;
    string input;
    getline(cin, input);
    int time = stoi(input);
    if(time < 0000 || time > 2400)
    {
        cout<<"Invalid Time input"<<endl;
        return 0;
    }
    if(time == 0000)
    {
        cout<<"Currently it is midnight";
    }
    else if(time == 1200)
    {
        cout<<"Currently it is noon";
    }
    else if(time >=0600 && time < 1200)
    {
        cout<<"It's morning ";
    }
    else if(time >= 1200 && time < 1700)
    {
        cout<<"It's afternoon";
    }
    else if(time >= 1700 &&1 time < 2000)
    {
        cout<<"It's evening";
    }
    else
    {
        cout<<"It's night";
    }
    return 0;
}
