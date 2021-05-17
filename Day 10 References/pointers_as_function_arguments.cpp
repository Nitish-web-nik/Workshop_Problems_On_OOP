#include <iostream>
using namespace std;

void copychar(char *from, char* to, int count)
{
    if(from == nullptr || to == nullptr)
    {
        return;
    }
    while(count-- > 0)
    {
        *to++ = *from++;
    }
}
int main()
{
    char string[] = {"nitish kumar"};
    char buffer[15];
    copychar(string, buffer,13);
    cout<<buffer;
    return 0;
}
