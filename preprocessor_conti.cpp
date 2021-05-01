#include<iostream>

#define LEVEL 3

using namespace std;
int main()
{
    #if LEVEL == 0
        #define SCORE 23
    #else
    #if  LEVEL == 1
        #define SCORE 44
    #endif
    #endif // LEVEL
    #if LEVEL == 2
       #define SCORE 55
    #elif LEVEL == 3
        #define SCORE 32
    #endif // LEVEL
    cout<< SCORE;
    return 0;
}
