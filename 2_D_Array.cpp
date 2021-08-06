#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int i,j,a,sum = 0;
    cout<<"Enter the 9 elements"<<endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j <3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Elements of the array are:- "<<endl;
    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j <3 ; j++)
        {
            cout<<arr[i][j]<<" ";
            sum = sum + arr[i][j];
        }
        cout<<"\tSum of row "<<i<< "= "<<sum<<endl;
    }
    return 0;
}
/*   Output:-
Enter the 9 elements
1
2
3
4
5
6
7
8
9
Elements of the array are:-
1 2 3   Sum of row 0= 6
4 5 6   Sum of row 1= 15
7 8 9   Sum of row 2= 24

*/
