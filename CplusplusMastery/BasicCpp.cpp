
#include "BasicCpp.h" 
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <iostream>
#include <cmath>


using namespace std;

//Data Types
 void data_types()
{
	int num = 1;
	long lng = 1000000000;
	long long lnglng = 10000000000000000000;
	short shrt = 1000000000000;
	unsigned int uint = -1000;
	float flt = 12.00234;

	bool bl = true;
	char ch = '&';
	double dble = 0.0;
	string str = "";

	//Abstract data types
	int array []  = {1,2,3,4,5};
	vector<int> vector_type = { 1, 2, 3, 4, 5 };
	list<int> list_type = { 1,2,3,4,5 };
	map<int, string> mp = { {1,"A"}, {2,"B"} };
	set<int> st = { 0,2,3,13 };
	stack<int> stk;
	stk.push(1);
	stk.push(12);
	stk.push(5);

	enum {MALE , FEMALE , NONE = 0};

	// type definitions
	typedef double long Dbl_int;
    Dbl_int  new_type;

	std::cout << "Data type ==> " << typeid(num).name() << " :: " << to_string(num);
}

 //Operators
 void operators()
 {
	 //Initialization
	 int a, b, c, d, e, f, result;
	 a = 6;
	 b = 6;
	 c = 7;
	 d = 8;
	 e = 4;
	 f = 2;
     
	 
	 //Arithmetic operators 
	 cout << "\n";
	 cout << "Arithmetic operators" << "\n"; 
	 cout << "\n";

	 cout << "Addition ==> " << a << " + " << b << " = " << a + b << "\n";
	 cout << "Substraction ==> " << a << " - " << b << " = " << a - b << "\n";
	 cout << "Division ==> " << a << " / " << b << " = " << a / b << "\n";
	 cout << "Modulus ==> " << c << " % " << b << " = " << c % b << "\n";
	 cout << "Increment ==> " << c << " ++ " << " = " << c++ << "\n";
	 cout << "Decrement ==> " << c << " -- " << " = " << c-- << "\n";


	 //Assignment operators
	 cout << "\n";
	 cout << "Assignment operators" << "\n";
	 cout << "\n";

	 cout << d << " += " << e;
	 d += e;
	 cout << " = " << d << "\n";

	 cout << d << " -= " << e;
	 d -= e;
	 cout << " = " << d << "\n";

	 cout << d << " /= " << e;  
	 d /= e;
	 cout << " = " << d << "\n";

	 cout << d << " *= " << e;
	 d *= e;
	 cout << " = " << d << "\n";

	 cout << d << " *= " << e;
	 d *= e;
	 cout << " = " << d << "\n";
	  

	 //Comparison operators
	 cout << "\n";
	 cout << "Comparison operators" << "\n";
	 cout << "\n";

	 cout  << a << " == " << b << " = " << (a == b) << "\n";
	 cout << a << " != " << b << " = " << (a != b) << "\n";
	 cout << a << " >= " << b << " = " << (a >= b) << "\n";
	 cout << a << " < " << b << " = " << (a < b) << "\n";
	 cout << a << " > " << b << " = " << (a > b) << "\n";


	 //String 

	 cout << "\n";
	 cout << "String" << "\n";
	 cout << "\n";

	 string text = "abcdefghijklmn";
	 string swapped = "rrt";
	 cout << "Sample Text =>" << text << "\n";
	 cout << "Lenght =>" << text.length() << "\n";
	 cout << "Concatination =>" << text.append("Additional Text") << "\n";
	 cout << "Access String =>" << text[0] << "\n";
	 cout << "Substr String =>" << text.substr(3) << "\n";
	 cout << "rfind String =>" << text.rfind("a") << "\n";
	 cout << "capacity String =>" << text.capacity() << "\n";
	 cout << "empty String =>" << text.empty() << "\n";
	 cout << "compare String =>" << text.compare("abcdefghijklmn") << "\n";
	 cout << "erase String =>" << text.erase(2) << "\n";
	 cout << "find_first_not_of String =>" << text.find_first_not_of("a") << "\n";
	 text.swap(swapped);
	 cout << "swap String =>" << swapped << "\n";

	 //cMath

	 cout << "\n";
	 cout << "cMath" << "\n";
	 cout << "\n";

	 int num1 = 123.9;
	 int num2 = 7; 
	 cout << num1 << " min " << num2 << " = " << min(num1, num2) << "\n";
	 cout << num1 << " max " << num2 << " = " << max(num1, num2) << "\n";
	 cout << " sqrt " << num2 << " = " << sqrt(num1) << "\n";
	 cout << " round " << num2 << " = " << round(num1) << "\n";
	 cout << " cos " << num2 << " = " << cos(num1) << "\n";

	 // conditions and loops

	 cout << "\n";
	 cout << "conditions and loops" << "\n";
	 cout << "\n";

	 if (num1 == num2)  cout << "A = B";
	 else if (num1 > num2) cout << "A > B";
	 else if (num1 < num2) cout << "A < B";
	 else cout << "A and B are null" << "\n";

	 cout << "\n";
	 string val = (num1 < 0) ? "less than zero" : "greater than zero"; // tenary operator
	 cout << to_string(num1) + " is " << val << "\n" ;

	 switch (num1)
	 {
	   case 1: cout << "num1 is 1";
		   break;
	   case 2: cout << "num1 is 2";
		   break;
	   case 3: cout << "num1 is 3";
		   break;
	   default: cout << "num1 is " << to_string(num1);
		   break;
	 }

	 cout << "\n";
	 while (num1 > 0)
	 {
		 cout << "Printing this while num1 is a positive number.";
		 cout << "\n";
		 num1 -= 100;
	 }
	 cout << "\n";

	 vector<int> vector_number = { 1,2,3,4,5 };
	 for (auto i : vector_number)
	 {
		 cout << to_string(i);
		 //continue;
		 //break;
	 }
	 cout << "\n";


 }

