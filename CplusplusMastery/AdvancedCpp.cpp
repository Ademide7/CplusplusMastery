#include "AdvancedCpp.h"
#include <string>
#include <iostream>

using namespace std;


//Structures
struct myStruct
{
	int Number = 0;
	string Text = "Value";
	double dble = 0.0;
	float flt = 0.1;
};
void  myStructMethod()
{
   myStruct strct;
   strct.Number = 0; 

 
}

//Refrence and Pointers
void  RefAndPointersMethod()
{
	/*cout << "\n";
	string some_text = "somelonnnnnnnnnngtext";
	string& ref_text = some_text;
	cout << ref_text;
	 
	cout << "\n";
	string* pnt_text = &some_text;
	cout << pnt_text;
	cout << "\n";

	cout << *pnt_text;
	cout << "\n";*/

	cout << "\n";

	int rnum = 10;
	int& ref_num = rnum; //refrencing a variable
	cout << ref_num;

	cout << "\n";

	int* pnt_num = &rnum; //pointing to a memory adddress

	cout << "\n";
	cout << pnt_num;
	cout << "\n";
	cout << *pnt_num; //derefrencing.

	cout << "\n";

}

//Functions
string test_function1()
{
	return "Some random text.";
}

string test_function2(string& msg)
{
	return "Text two :" + msg;
}

string test_function2(int& msg)
{
	return "Text two int :" + to_string(msg);
}

// Recurssive call.
int fibonacci(int& num1 , int& num2, int& it)
{
	int result = num1 + num2;
	cout << "Fib num ==>" << result << "\n";
	int iterator = it-1;
	if (it > 0)
	{
		fibonacci(num2, result, iterator);
	}
	else
	{
		return result;
	}
}

void functions()
{
	test_function1();
	string msg = "Random Text.";
	int msg_num = 79;
	test_function2(msg);
	test_function2(msg_num);


	int fib_Num = 10;
	int initial_val = 0;
	int final_val = 1;
	cout << "\n";
	cout << "fibonacci ==> " <<	fibonacci(initial_val, final_val, fib_Num);
	int result;
}



///Classes and OOP (check header file for calls defintion)
Student::Student(string name, int age, Faculty school)
	: Name(name), Age(age), School(school), Id(2) {};

int Student::getAge() 
{
	if (Age != 0)  return Age;
	else return 0;
}

string Student :: getName() 
{
	if (Name != "")  return Name;
	else return "N/A";
}

string Student::getSchool()
{
  return to_string((Faculty)School);
}

//Encapsulation set and get for Password Property.
bool Student::setPassword(string pwd){
	Password = pwd;
	return false;
};

string Student::getPassword()
{
	return Password.substr(0, 5);
}

// Inheritance
string GeniusStudent::getStudentNameAndEnrollmentDate()
{
	return Name + " " + EnrollmentDate;
}

string Student::getSlogan()
{
	return "Am a student!";
}

string GeniusStudent::getSlogan()
{
	return "Am a genius Student!";
} 

GeniusStudent::GeniusStudent(string name, int age, Faculty school) : Student(name,age,school)
{

};



