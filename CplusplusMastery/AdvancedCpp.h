#pragma once
#include <string>
#include <iostream>

using namespace std;
 

void RefAndPointersMethod();
void functions();

 //:: scope resolution operator 

///Classes and OOP
enum Faculty { Science, Engineering, Technology };
class Student
{
  public  :
	int Id;
	string Name;
	Faculty School;
	int Age;

	//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users
  private : 
	string Password;

	//Access in this class(Base Class) and Derived class
protected :
	string EnrollmentDate;



  public: 
	Student(string name, int age,  Faculty school);
	int getAge();
	string getName();
	string getSchool(); 
	bool setPassword(string pwd);
	string getPassword();
	 
	// Polymorphisim ==> same method in base and derive class , with different behaviours
	string getSlogan();
	 
};


// Inheritance
class GeniusStudent : Student
{
   public:
	  GeniusStudent(string name, int age, Faculty school);
	  string getStudentNameAndEnrollmentDate();
	  // Polymorphisim
	  string getSlogan();
};

