/*We should avoid to use unique_ptr in func. arguments because If the actual argument
is a unique_ptr<> instance, the function's formal argument will steal the value of
the actual argument, leaving the actual argument equal to nullptr.
This exercise shows how to transfer ownership of a dynamic variable by returning
a unique_ptr<> instance to it
*/
#include<iostream>
#include<memory>
using namespace std;
struct noisy
{
    noisy(){cout<<"constructing noisy"<<endl;}
    ~noisy(){cout<<"destroying noisy"<<endl;}
};
unique_ptr<noisy> func()
{
    return make_unique<noisy>();
}
int main()
{
    auto u1 = func();
    return 0;
}


/*Output
constructing noisy
destroying noisy
*/
