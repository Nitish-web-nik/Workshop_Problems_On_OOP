#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    int **ptr1;
    ptr = &a;
    ptr1 = &ptr;
    cout<<"Value of a "<<a<<endl;
    cout<<"Value of a via ptr "<<*ptr<<endl;
    cout<<"Value of a via ptr1 "<<**ptr1<<endl;
    cout<<"Value of ptr via ptr1 "<<*ptr1<<endl;//i.e address of a
    cout<<"Address of a "<<&a<<endl;
    cout<<"Address of a via ptr "<<ptr<<endl;
    cout<<"Address of ptr "<<&ptr<<endl;
    cout<<"Address of ptr via ptr1 "<<ptr1<<endl;
    return 0;
}
/*Output:-
Value of a 10
Value of a via ptr 10
Value of a via ptr1 10
Value of ptr via ptr1 0x78fe14
Address of a 0x78fe14
Address of a via ptr 0x78fe14
Address of ptr 0x78fe08
Address of ptr via ptr1 0x78fe08
*/
