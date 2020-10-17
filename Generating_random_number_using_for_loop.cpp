#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    bool isBool = true;
    string input = "";
    int count = 0;
    cout<<"***********Random Number Generator*************"<<endl;
    while(isBool)

    {
        cout<<"Enter amount of numbers to generate: and 0 to exit"<<endl;
        getline(cin, input);
        count = stoi(input);
        if(count == 0)
        {
            break;
        }
        srand((unsigned) time(0));
        for(int i = 0; i < count;++i)
        {
            cout<<rand()%10;
            if( i == count -1)
            {
                continue;
            }
            cout<< ",";
        }
            cout<<"\n\n";
        return 0;
    }
}
