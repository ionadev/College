/*
Write a function in C++ to input the given string (including spaces) and reverse it using a function which locates the end of the string and swaps the first character with the last character, the second character with the second – last character and so on. 
(15)
*/

#include <iostream>
using namespace std;

void reverse(char []);

int main()
{
	char name[10];

	cout << "Enter The Name" << endl;
	cin.getline(name, 11);

	reverse(name);
	
	return 0;
}

void reverse(char name[10])
{
	char n[10];
	for (int i = 0; i < 5; i++)
	{
		n[i] = name[9 - i];
		n[9 - i] = name[i];
	}

	cout << n << endl;
}