/*
Write a program in C++ that first initializes an array of five given numbers (short /float/ double). 
The program must add these numbers by traversing this array with a pointer. 
The output should print the starting address of the array with the size of the number (in bytes) to which it points. 
The program must also print the sum and pointer address with addition of every number as well as the ending address.
(15)
*/

#include <iostream>
using namespace std;

void transverse(int *);

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	transverse(a);
}

void transverse(int *a)
{
	int total = 0;
	for (int i = 0; i < 10; i++)
	{	
		if(i == 0)
		{
			cout << &a
		}
		cout << *a << "\t";
		total += *a;
		a++;
		if(i == 9)
		{
			cout << &a
		}
	}

	cout << "The Total Is: " << total;
}
