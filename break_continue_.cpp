#include<iostream>
using namespace std;
int main()
{
    int i, num, multiples, no_printed =0;
    cout<<"Enter the number to print its multiples "<<endl;
    cin>> num;
    cout<<"enter the total no of multiples to be printed" <<endl;
    cin>> multiples;
    cout<< "Multiples are ";
    for(i = 1; i< 100; ++i)
    {
        if(no_printed == multiples )
        {
            break;
        }
        if(i%num != 0)
        {
            continue;
        }
            cout<< " "<< i;
            ++no_printed;
    }
    return 0;
}
