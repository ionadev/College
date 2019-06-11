/* 
Write a program in C++ that initializes a Ratio class with no parameters as a default constructor.
The program must print the message “OBJECT IS BORN” during initialization.
It should display the message “NOW X IS ALIVE’’, when the first member function Ratio x is called.
The program must display “OBJECT DIES” when the class destructor is called for the object when it reaches the end of its scope.
(15)
*/

#include <iostream>
using namespace std;

class Ratio
{
public: 
	Ratio()
	{
		cout << "OBJECT IS BORN";
	}

	~Ratio()
	{
		cout << "OBJECT DIES";
	}

	void printm()
	{
		cout << "NOW X IS ALIVE";
	}
};

int main()
{
	Ratio r;
	r.printm();
	return 0;
}