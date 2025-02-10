// CplusplusMastery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BasicCpp.h" 
#include "AdvancedCpp.h"
#include <string>;
#include "Utilities.h" 

using namespace std;

int main()
{  
    std::cout << "Data types : \n"; data_types(); cout << "\n";
    std::cout << "Operators : "; operators(); cout << "\n";
    std::cout << "OtherFuntionalitites : "; otherFuntionalitites(); cout << "\n";
    std::cout << "RefAndPointersMethod : "; RefAndPointersMethod(); cout << "\n";
    std::cout << "functions : "; functions(); cout << "\n";  

    std::cout << "Classes and OOP : " << "\n";
    Student std("Ademide", 45, Technology);
    Student* ptr = new Student("Ademide", 45, Technology);

    std::cout << "Student Age ===> " << ptr->getAge(); cout << "\n";
    std::cout << "Student Name ===> " << ptr->getName(); cout << "\n";
    std::cout << "Student School ===> " << ptr->getSchool(); cout << "\n";

    
    ptr->setPassword("MooseGang");
    std::cout << "Student Paasword ===> " << ptr->getPassword(); cout << "\n";
    delete ptr;


    GeniusStudent* genius = new GeniusStudent("Femi", 45, Technology); 
    std::cout << "GeniusStudent Name ===> " << genius->getStudentNameAndEnrollmentDate(); cout << "\n";
    std::cout << "Genius Student Slogan ===> " << genius->getSlogan(); cout << "\n";


    std::cout << "Write to File ===> " << write_to_file("TestFile","Text message is short and simple."); cout << "\n";
    std::cout << "Read File data ===> " << "\n"; cout << read_file("TestFile"); cout << "\n";

    std::cout << "Time ==> current time : " <<  get_current_time(); cout << "\n";
    std::cout << "Time ==> Make time : " << make_time(2024,12,10,12,20,19); cout << "\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
