#include <iostream>
using namespace std;

class student
{
	private:
		char  name[30];
		int   rollNo;
		float marks1, marks2, marks3, total;
	public:
		void getDetails(void);
		void putDetails(void);
};

//member function definition, outside of the class
void student::getDetails(void){
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter marks of 3 subjects: ";
	cin >> marks1>>marks2>>marks3;
	total = marks1 + marks2 + marks3;
}

//member function definition, outside of the class
void student::putDetails(void){
	cout << "Student details:\n";
	cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total Marks:" << total;
}

int main()
{
	student std;		//object creation

	std.getDetails();
	std.putDetails();

	return 0;
}
