#pragma warning(disable : 4996).
#include "Utilities.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

string write_to_file(string fileName, string message)
{
	try
	{
		if (fileName.empty() || message.empty())
		{
			return "Invalid Request!";
		}

		// Create and open a text file
		ofstream file(fileName);

		// Write to the file
		file << message;

		if (file.fail())  return "An error occurred!";

		// Close the file
		file.close();

		return "Saved successfully!";
	}
	catch (int e)
	{ 
		return "Execption ==>"  + to_string(e);
	}
}

string read_file(string fileName)
{
	try
	{
		if (fileName.empty())
		{
			return "Invalid Request!";
		}

		// Create a text string, which is used to output the text file
		string myText;

		// Read from the text file
		ifstream MyReadFile(fileName);

		// Use a while loop together with the getline() function to read the file line by line
		while (getline(MyReadFile, myText)) {
			// Output the text from the file
			cout << myText; cout << "\n";
		}

		// Close the file
		MyReadFile.close();

		return "Done successfully!";
	}
	catch (int e)
	{
		return "Execption ==>" + to_string(e);
	}
}

 string get_current_time()
{
	time_t time_val;
	time(&time_val);

	
	string val =  ctime(&time_val);
	return val;
}//time_t* time_val = time(NULL);

string make_time(int yr = 2000 , int mnt = 5, int day = 9, int hr = 12 , int min = 30  , int sec = 20)
{
	struct tm tym;
	time_t datetimeVal;

	tym.tm_year = yr - 1900;  // Years since 1900
	tym.tm_mon = mnt;             // February (0-based index)
	tym.tm_mday = day;           // 10th day
	tym.tm_hour = hr;           // 3 PM
	tym.tm_min = min;            // 30 minutes
	tym.tm_sec = sec;             // 0 seconds

	datetimeVal = mktime(&tym);

	// Check if conversion was successful
	if (datetimeVal == -1) {
		std::cerr << "Failed to convert time.\n";
		return "";
	}

	string val =  ctime(&datetimeVal);
	return val;

	
}

//string weekdays[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	//cout << "The date is on a " << weekdays[datetime.tm_wday];

	//int diff = difftime(nextyear, now);
	//cout << diff << " seconds until next year";