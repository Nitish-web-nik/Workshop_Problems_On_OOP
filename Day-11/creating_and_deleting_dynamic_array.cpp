#include<iostream>
#include<cstring>//to handle null-terminated character
using namespace std;
int main()
{
    char const* cp = "arbitrary null terminated text string";
    char* buffer = new char[ strlen(cp)+1];
    strcpy(buffer, cp);
    cout<<"Buffer = "<<buffer;
    delete [] buffer;
    return 0;
}
