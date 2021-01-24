#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[1000],size,i,j;
    cin>>size;
    for(i = 0; i< size; i++)
    {
        cin>>arr[i];
    }
    for(j = size-1; j >= 0; j--)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
