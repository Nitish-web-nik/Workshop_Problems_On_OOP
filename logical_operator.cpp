#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1, name2, name3;
    cout<<"Please Enter name 1"<<endl;
    cin>>name1;
    cout<<"Please Enter name 2"<<endl;
    cin>>name2;
    cout<<"Please Enter name 3"<<endl;
    cin>>name3;
    if(name1 == name2 && name2 == name3)
    {
        cout<<"All the names are Same"<<endl;
    }
    else if(name1 == name2 || name2 == name3 || name1 == name3)
    {
        cout<<"Some of the names matched"<<endl;
    }
    cout<<endl<<"Name 1 and Name 2 are "<<(!(name1 == name2) ? "different":  "the same");
    return 0;
}

