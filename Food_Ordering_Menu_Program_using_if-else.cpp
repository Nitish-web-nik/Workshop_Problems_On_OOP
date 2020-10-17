/*enum class Color { red, green = 20, blue };
Color r = Color::blue;
switch(r)
{
    case Color::red  : std::cout << "red\n";   break;
    case Color::green: std::cout << "green\n"; break;
    case Color::blue : std::cout << "blue\n";  break;
}
// int n = r; // error: no scoped enum to int conversion
int n = static_cast<int>(r);*/

#include<iostream>
using namespace std;
int main()
{
    string input;
    int number;
    cout<<"  Menu "<<endl;
    cout<< "1. Fries"<< endl;
    cout<<"2. Burger"<<endl;
    cout<<"3. Shake"<<endl;
    cout<<"Enter the order no. 1-3 to get the price of the item"<< endl;
    getline(cin,input);
    number = stoi(input);
    if(number == 1)
        cout<< "The price of Fries is $3.5";
    else if(number == 2)
        cout<< "The price of Burger is $4.6";
    else
        cout<< "The price of Shake is $8.2";
    return 0;
}
