#include "DSACpp.h"
#include "Utilities.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime> 

#include <vector> 
#include <list> 
#include <set> 
#include <map> 
#include <stack> 
#include <queue>
#include <algorithm>

using namespace std;

//Vector -- Stores elements like an array but can dynamically change in size.Adding and removing of elements are usually done at the end.Elements can be accessed by index.
//List --	Stores elements sequentially, where each element is connected to the next.Adding and removing of elements can be done at both ends.Not accessible by index.
//Stack --	Stores elements in a specific order, called LIFO(Last In, First Out), where elements can only be added and removed from the top.Not accessible by index.
//Queue --	Stores elements in a specific order, called FIFO(First In, First Out), where elements are added at the end and removed from the front.Not accessible by index.
//Deque --	Stores elements in a double - ended queue, where elements can be added and removed from both ends.Elements can be accessed by index.
//Set --	Stores unique elements.Not accessible by index.
//Map --	Stores elements in "key/value" pairs.Accessible by keys(not by index).

// The key components of the STL consist of
// containers, iterators, and algorithms, and the relationship betweem them



void container_types()
{
	//Vector  A vector in C++ is like a resizable array.
	vector<int> vector_of_int = { 1,2,3,5 };
	cout << ":: Vector ::" << "\n";
	for (int item : vector_of_int)
	{
		cout << item;
	}
	cout << "\n";
	cout << "Vector size() ==>" << vector_of_int.size() << "\n";
	cout << "Vector front()  ==>" << vector_of_int.front() << "\n";
	cout << "Vector back()  ==>" << vector_of_int.back() << "\n";
	cout << "Vector [0]  ==>" << vector_of_int[0] << "\n";
	cout << "Vector at()  ==>" << vector_of_int.at(0) << "\n";

	/*try
	{
		cout << "Vector at() for out of range ==>" << vector_of_int.at(9) << "\n";
	}
	catch (int err)
	{
		cout << "Out of range error " + err;
	}*/

	cout << "Vector push_back(99)  ==>"; 
	vector_of_int.push_back(99);
	cout << "\n";
	for (int item : vector_of_int)
	{ 
		cout << item;
	}
	cout << "\n";
	cout << "Vector pop_back()  ==>";
	vector_of_int.pop_back();
	cout << "\n";
	for (int item : vector_of_int)
	{
		cout << item;
	}
	cout << "\n";
	 


	//list  A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
	//However, two major differences between lists and vectors are :
	//You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
    //Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
	list<int> list_of_int = { 1,2,34,5 };
	cout << "list_of_int size()" << list_of_int.size(); cout << "\n";
	cout << "list_of_int front()" << list_of_int.front(); cout << "\n";
	cout << "list_of_int back()" << list_of_int.back(); cout << "\n";
	cout << "push_back(9)"; cout << "\n";
    list_of_int.push_back(9);
	cout << "push_front(56)"; cout << "\n";
	list_of_int.push_front(56);
	cout << ".pop_back()"; cout << "\n";
	list_of_int.pop_back();
	cout << "pop_front()"; cout << "\n";
	list_of_int.pop_front();
	cout << "unique()"; cout << "\n";
	list_of_int.unique();
	for(auto i : list_of_int)
	{
		cout << "list_of_int ==> " +  i; cout << "\n";
	}



	//set
	//A set stores unique elements where they:
	//Are sorted automatically in ascending order.
	//Are unique, meaning equal or duplicate values are ignored.
	//Can be added or removed, but the value of an existing element cannot be changed.
	//Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
	set<int> set_of_int = { 1,2,3,5,6,67 };
	cout << "set_of_int initialized size==>"; cout << "\n";
	cout << set_of_int.size(); cout << "\n"; 

	set_of_int.insert(2);
	set_of_int.insert(7);
	
	// Sort elements in a set in descending order
	set<int, greater<int>> numbers = { 1, 7, 3, 2, 5, 9 };
	// Print the elements
	for (int num : numbers) {
		cout << num << "\n";
	}
	 

	//A stack stores multiple elements in a specific order, called LIFO.
	//LIFO stands for Last in, First Out.
	stack<string> stck; 
	stck.push("Hey");
	stck.push(".");
	stck.push("lets"); 
	stck.push("go"); 
	stck.push("for");
	stck.push("a");
	stck.push("walk");
	stck.push(".");
	cout << "stck ==> initialized with size :";
	cout << stck.size(); cout << "\n";
	stck.pop(); // pops at back
	stck.pop();
	stck.pop();
	cout << "stck ==> size reduced with size :"; 
	cout << stck.size(); cout << "\n";
	cout << "stck.top(); " << stck.top(); cout << "\n"; 


	//Queue --	Stores elements in a specific order, called FIFO(First In, First Out), where elements are added at the end and removed from the front.Not accessible by index.
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	cout << "Queue initialization with size ==> " << que.size(); cout << "\n";
	cout << "que.size(); " << que.size(); cout << "\n";
	cout << "que.front(); " << que.front(); cout << "\n";
	cout << "que.back(); " << que.back(); cout << "\n";
	que.pop(); //  pops at front
	que.pop();	
	cout << "Queue after popping"; cout << "\n";
	cout << "que.size(); " << que.size(); cout << "\n";
	cout << "que.front(); " << que.front(); cout << "\n";
	cout << "que.back(); " << que.back(); cout << "\n";

	
	
	//Deque --	Stores elements in a double - ended queue, where elements can be added and removed from both ends.Elements can be accessed by index.
	deque<int> dque;
	dque.push_back(1);
	dque.push_back(2);
	dque.push_back(3);
	dque.push_back(4);
	cout << "Dequeue initialization with size ==>" ; cout << "\n";
	cout << "dque.size(); " << dque.size(); cout << "\n";
	cout << "dque.front(); " << dque.front(); cout << "\n";
	cout << "dque.back(); " << dque.back(); cout << "\n";

	dque.pop_front();
	dque.pop_back();

	cout << "Dequeue after popping"; cout << "\n";
	cout << "dque.size(); " << dque.size(); cout << "\n";
	cout << "dque.front(); " << dque.front(); cout << "\n";
	cout << "dque.back(); " << dque.back(); cout << "\n";
	 
	 
	//map

	map<int, string> map_of_int_and_string = { {1, "Gold"} , {2, "Silver"} , {3, "Diamond"} , {4, "Sodium"} , {5 , "Potassium"} , {6,"Bronze"}};

	cout << "map_of_int_and_string initialization size() ==> "; cout << "\n";
	cout << map_of_int_and_string.size(); cout << "\n";

	for (auto item : map_of_int_and_string)
	{
		cout << item.first + "  "; cout << item.second;  cout << "\n";
	}

	cout << "Added two more"; cout << "\n";
	map_of_int_and_string.insert({ 7,"Magnesium"});
	map_of_int_and_string.insert({ 8,"Hydrogen" });

	/*auto map_val = map_of_int_and_string.end();
	cout << "map_val last item ==>" << map_val->first; cout << " , " << map_val->second; cout << "\n";*/
    

	cout << "map_of_int_and_string.at(8); ==>" << map_of_int_and_string.at(8); cout << "\n";
	 
}

void iterator_and_inbuilt_algorithim()
{
	cout << "Iterator for vector ==> "; cout << "\n";
	vector<int> vector_of_int = { 1,2,3,5 };
	vector<int> ::iterator it;
	for (it = vector_of_int.begin() ; it != vector_of_int.end(); it++)
	{
		cout << "vector item ==> " << *it; cout << "\n";
		*it = 2;
	}

	for (it = vector_of_int.begin(); it != vector_of_int.end(); it++)
	{
		cout << "vector item ==> " << *it; cout << "\n";
	}

	cout << "Iterator for map ==>"; cout << "\n";
	map<int, string> map_item = { {1,"Polo"} , {2,"D&G"} }; 
	for (auto it = map_item.begin(); it != map_item.end(); it++)
	{
		cout << "map item ==> " << it->first << it->second; cout << "\n";
	}

	cout << "Iterator for set ==>"; cout << "\n";
	set<int> set_item = {1,2,34};
	for (auto it = set_item.begin(); it != set_item.end(); it++)
	{
		cout << "set item ==> " << *it;  cout << "\n";
	}


    // C++ Algorithm
	//Sorting Algorithims

	vector<int> vector_of_int2 = { 1,2,3,5 };
	sort(vector_of_int2.begin(), vector_of_int2.end());
	cout << "Sorted vector (done by ascending) ::"; cout << "\n";
	for (auto it = vector_of_int2.begin(); it != vector_of_int2.end(); it++)
	{
		cout << "vector item -> " << *it; cout << "\n";
	}

	sort(vector_of_int2.rbegin(), vector_of_int2.rend());
	cout << "Sorted vector (done by decending) ::"; cout << "\n";
	for (auto it = vector_of_int2.begin(); it != vector_of_int2.end(); it++)
	{
		cout << "vector item -> " << *it; cout << "\n";
	}

	auto it1  = find(vector_of_int2.begin(), vector_of_int2.end(), 1);
	cout << "find 1 in vector ::"; 
	cout << *it1;cout << "\n"; 

	/*try {
		auto it11 = find(vector_of_int2.begin(), vector_of_int2.end(), 1000);
		cout << "find 1000 in vector ::";
		cout << *it11; cout << "\n";
	}
	catch (const char* e) {
		std::cout << "Caught exception: " << e << std::endl;
	}
	catch (...) {
		std::cout << "Caught an unknown exception." << std::endl;
	}*/

	auto it2 = min_element(vector_of_int2.begin(), vector_of_int2.end());
	cout << "min_element in vector :: ";
	cout << *it2; cout << "\n";

	auto it3 = max_element(vector_of_int2.begin(), vector_of_int2.end());
	cout << "max_element in vector ::"; cout << "\n";
	cout << *it3;

	/*vector<int> vector_copy;

	copy(vector_of_int2.begin(), vector_of_int2.end(), vector_copy.begin());
	cout << "Vector_copied from another vector ::"; cout << "\n";
	for (auto it = vector_copy.begin(); it != vector_copy.end(); it++)
	{
		cout << "vector item -> " << *it; cout << "\n";
	}*/

	vector<int> vector_fill(5);

	fill(vector_fill.begin(), vector_fill.end(), 35);
	for (auto it = vector_fill.begin(); it != vector_fill.end(); it++)
	{
		cout << "vector_fill item -> " << *it; cout << "\n";
	}
    


	 

}

void DSA_Algorithims()
{
	 
}




 

