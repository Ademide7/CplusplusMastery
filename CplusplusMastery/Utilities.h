#pragma once
#include <string>

using namespace std;

string write_to_file(string fileName, string message);
string read_file(string fileName);
string get_current_time();
string make_time(int yr, int mnt, int day, int hr , int min, int sec);

string generate_random_number(int max);