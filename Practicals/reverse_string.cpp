/*
Write a function in C++ to input the given string (including spaces) and reverse it using a function which locates the end of the string and swaps the first character with the last character, the second character with the second – last character and so on. 
(15)
*/

#include <iostream>
using namespace std;

void reverse(char []);

void main()
{
	char name[10];

	cout << "Enter The Name" << endl;
	cin.getline(name, 10);

	reverse(name);
}

void reverse(char name[10])
{
	char n[10], swap;
	int c = 0;
	for (int i = 0; i < 10; i++)
	{
		swap = n[i];
		n[i] = name[10 - c];
		name[10 - c] = swap;

		c++;
	}

	cout << n;
}