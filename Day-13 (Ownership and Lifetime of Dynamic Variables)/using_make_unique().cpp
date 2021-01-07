#include<iostream>
#include<memory>
using namespace std;
struct noisy
{
    noisy(){cout<<"constructing noisy "<<endl;}
    ~noisy(){cout<<"destroying noisy "<<endl;}
};
int main()
{
    unique_ptr<noisy> u1(new noisy);
    unique_ptr<noisy> u2 = make_unique<noisy>();
    auto u3 = make_unique<noisy[]>(4);
    //auto keyword deduced the type of u3 by initializer by default
    return 0;
}
/*Output:-
constructing noisy
constructing noisy
constructing noisy
constructing noisy
constructing noisy
constructing noisy
destroying noisy
destroying noisy
destroying noisy
destroying noisy
destroying noisy
destroying noisy
*/
