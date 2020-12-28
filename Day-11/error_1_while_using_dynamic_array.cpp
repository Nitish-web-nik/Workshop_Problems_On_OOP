//Using a dynamic variable before creating it
#include<iostream>
using namespace std;

int main()
{
    char* p = nullptr;
    p[10] = '!';
    return 0;
}
//Output:- Dumped core segmentation fault
