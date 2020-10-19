#include<iostream>
using namespace std;
int main()
{
    int arr[7] {1,2,3,4,5,6,7};
    for(int i = 0; i<7 ;i++)
        cout<<&arr[i]<<endl;
    return 0;
}
