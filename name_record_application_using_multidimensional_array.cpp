#include<iostream>
#define MAX_COUNT 5
using namespace std;
int main()
{
    string arr[7][2];
    int i, userId = 0;
    cout<<"Enter the User name "<<endl;
    for( i = 0; i < MAX_COUNT; i++)
    {
        cout<<endl<<"User "<<i+1<<" Forename:";
        getline(cin, arr[i][0]);
        cout<<"User "<<i+1<<" Surname:";
        getline(cin, arr[i][1]);
    }

    bool isBool = true;
    while(isBool)
    {
        cout<<"Enter user-id to fetch or -1 to quit the program"<<endl;
        cin>>userId;
        if(userId == -1)
        {
            isBool = false;
        }
        else if(userId>= 1 && userId <=MAX_COUNT)
        {
            cout<<"User is "<<arr[userId-1][0]<<" "<<arr[userId-1][1]<<endl;
        }

        else
        {
            cout<<"please enter the correct id";
        }
    }
    return 0;
}
