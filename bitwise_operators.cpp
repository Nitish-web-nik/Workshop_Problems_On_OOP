// Bitwise Operator Examples.
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main()
{
    int myInt1 = 6; // 00110 in binary
    int myInt2 = 12; // 01100

    // Binary AND
    cout <<bitset < 5 > (myInt1 & myInt2) <<endl;

    // Binary OR
    cout <<bitset < 5 > (myInt1 | myInt2) <<endl;

    // Binary Ones Compliment
    cout <<bitset < 5 > (~myInt1) <<endl;

    // Binary Left Shift Operator
    cout <<bitset < 5 > (myInt1 << 2) <<endl;

    // Binary Right Shift Operator
    cout <<bitset < 5 > (myInt2 >> 2) <<endl;
}
