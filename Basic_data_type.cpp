#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;// = 3
    double e; //= 9
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout.precision(3);
    cout<<fixed<<d<<"\n";
    cout.precision(9);
    cout<<fixed<<e<<"\n";
    return 0;
}