#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector <int> myVector {1,2,3,4,5};


void printVector()
{
    for(int i = 0; i < myVector.size(); i++)
    {
        cout<<myVector[i]<<"\n";

    }
}

int main()
{
    //myVector.pop_back();//to delete the last element i.e 5
    //myVector.push_back(6);//to insert the element in last
    //myVector.erase(myVector.begin() +1);// to delete the element at index 1
    myVector.insert(myVector.begin() +3, 8);//insert element at 3rd index with 8 without deleting the 3rd index element
    printVector();
}
