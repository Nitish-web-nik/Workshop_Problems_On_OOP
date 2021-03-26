/**Write a program using template function to return the element stored at a particular index.**/

#include<iostream>
#define SIZE 5
using namespace std;
template<class P>
P get_search(P A[],P index)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        if(index==i)
            cout<<"\nFunction Template : Index "<<index<<" , Founded with Value : "<< A[i]<<endl;
    }
}
int main()
{
    int arr_search[SIZE],i,index;
    cout<<"Enter 5 elements of the array :"<<endl;
    for(i = 0; i < SIZE; i++)
        cin>> arr_search[i];
    cout<<"\nEnter Index to search the element : ";
    cin>>index;
    get_search(arr_search,index);
    return 0;
}
/**Input:-
Enter 5 elements of the array :
1
2
3
4
5

Enter Index to search the element : 4
Output:- Function Template : Index 4 , Founded with Value : 5
**/
