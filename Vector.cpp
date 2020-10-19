#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector <int> myVector {1,2,3};

//vector <int> myVector (3,1); will print 1 1 1

void printVector()
{
    for(int i = 0; i < myVector.size(); i++)
    {
        cout<<myVector[i]<<"\n";

    }
}

int main()
{
    printVector();
}
