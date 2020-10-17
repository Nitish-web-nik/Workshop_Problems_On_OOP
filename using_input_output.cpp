#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Enter your Name Please"<<endl;
    getline(cin,name);
    cout<< "Enter you Age please"<<endl;
    cin>> age;
    cout<<"Your name is "<< name << endl<< "Your age is "<<age;
    return 0;
}
