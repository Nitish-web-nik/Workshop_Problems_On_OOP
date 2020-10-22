#include<iostream>
#include<string.h>
using namespace std;

class Person
{
public:
    Person(int age , string name) : age(age),name(name) {};
    float age = 0;
    string name = "";
    bool operator == (Person const & other)
    {
        return ((age == other.age) && (name == other.name));
    }
};
int main()
{
    Person PersonA = Person(20, "Nitish");
    Person PersonB = Person(20, "Nitish");
    Person PersonC = Person(19, "Bablu");
    cout<<(PersonA == PersonB)<<endl;
    cout<<(PersonB == PersonC)<<endl;
}
