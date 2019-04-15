#include <iostream>
int main()
{
	int a[10],i=0,element,foundTimes=0;

	cout << "Enter The Elements Of The Array:" << endl;

	for(i=0;i<10;i++) 
	{
		cin >> a[i];
	}

	cout << "Searching!";

	for(i=0;i<10;i++)
	{
		if(a[i] == element) 
		{
			foundTimes++;
		}
	}

	cout << "The Given Element Was Found " << foundTimes << " Times!";
}