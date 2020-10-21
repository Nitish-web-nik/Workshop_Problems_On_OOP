#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int random = (rand() % 10) + 1;
    cout<<random;
    return 0;
}
