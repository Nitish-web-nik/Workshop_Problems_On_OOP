/*we create a few shared pointers and call a function that takes a shared pointer as
an argument and returns a shared pointer. The idea of this program is that a
function conditions a dynamic variable to never be nullptr, so the program doesn't
have to test for nullptr:*/

#include <iostream>
#include <memory>
using namespace std;
shared_ptr<char[]> func(shared_ptr<char[]> str)
{
    if(!str)
    {
        str.reset(new char[1]);
        str[0] = '\0';
    }
        return str;
}
int main()
{
    shared_ptr<char[]> null;
    if(null.get()==nullptr)
    {
        cout<<"null is equal to nullptr"<<endl;
    }
    auto result1 = func(null);
    if(result1.get() == nullptr)
    {
        cout<<"result1 is equal to nullptr"<<endl;
    }
    result1 = func(result1);
    return 0;
}

/*Output:-
null is equal to nullptr
*/
