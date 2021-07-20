/*The program in this exercise creates and destroys some class instances
to illustrate the lifetime of global, function-local, and block-local variables*/

#include<iostream>
using namespace std;

class noisy
{
    char const* s_;
public:
    noisy(char const* s)
    {
        cout<<"Constructing "<<s<<endl; s_ = s;
    }
    ~noisy()
    {
        cout<<"Destroying "<<s_<<endl;
    }
};
void func(char const*s)
{
    noisy func(s);
}
    noisy f("global 1");
    noisy ff("global 2");
int main()
{
    noisy n1("main() function local 1");
    func("function local 2");
    {
        noisy n("block local");
        func("function local 3");
    }
    return 0;
}
/*Output:-
Constructing global 1
Constructing global 2
Constructing main() function local 1
Constructing function local 2
Destroying function local 2
Constructing block local
Constructing function local 3
Destroying function local 3
Destroying block local
Destroying main() function local 1
Destroying global 2
Destroying global 1
*/
