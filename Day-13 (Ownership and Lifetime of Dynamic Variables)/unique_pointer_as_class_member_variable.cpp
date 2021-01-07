/*This exercise involves creating a simple class whose members are smart pointers
 to illustrate the simplified class syntax that results when smart pointers are class
 members.. and The developer need not write any code to delete the dynamic variable
 owned by the smart pointer.*/
#include <iostream>
#include <memory>
#include <cstring>
using namespace std;
struct noisy
{
    noisy(){cout<<"constructing noisy "<<endl;}
    ~noisy(){cout<<"destroying noisy "<<endl;}
};
class autobuf
{
    unique_ptr<noisy> np_;
    unique_ptr<char []> ptr_;
public:
    autobuf(char const* str);
    char* get();
};
autobuf::autobuf(char const* str)
  : np_(make_unique<noisy>()),
    ptr_(make_unique<char[]>(strlen(str) + 1))

{
    strcpy(ptr_.get(), str);
}

char* autobuf::get()
{
    return ptr_.get();
}
int main()
{
    autobuf buffer("My name is Nitish");
    cout<<"Hello world, "<<buffer.get()<<endl;
    return 0;
}
/*Output:-
constructing noisy
Hello world, My name is Nitish
destroying noisy
*/
