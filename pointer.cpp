/*
sample Input 4 5 
sample Output 9 1(sum and absolute difference)
*/

#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
    int c, d;
    c = *a + *b;
    d = *a - *b;
    if(d < 0)
    {
        d = -d;
    }
    cout<<c<<"\n"<<d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);

    return 0;
}