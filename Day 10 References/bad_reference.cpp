#include<iostream>
using namespace std;
int main()
{
    
    int *p = nullptr;
    int& r = *p;
    r = '!';
    return 0;
}
