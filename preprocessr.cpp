#include<iostream>
#define HELLO_WORLD "Hello World"
using namespace std;
int main()
{
    #ifdef HELLO_WORLD
    cout << HELLO_WORLD;
    #endif
    #undef  HELLO_WORLD
    #ifdef HELLO_WORLD
    cout<< HELLO_WORLD;
    #endif
    return 0;
}
