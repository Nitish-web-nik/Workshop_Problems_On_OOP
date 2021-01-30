#include<iostream>
using namespace std;
int main()
{
    string name = "Nitish Kumar";
    cout<<name<<endl;//Nitish Kumar
    cout<<name.length()<<endl;//12
    cout<<name[0]<<endl;//N
    cout<<name.find("umar", 0)<<endl;/*8 ->>>>it means find the string umar in whole name string and
    return index from where this string starts */
    cout<<name.find("sh", 3)<<endl;//4
    cout<<name.substr(7, 4)<<endl;//Kuma
    return 0;
}
