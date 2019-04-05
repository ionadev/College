#include <iostream>
using namespace std;

int main()
{
	int a[10],i,element;
	bool found=false;

	cout << "Enter The Elements Of Array:" << endl;

	for(i=0;i<10;i++)
	{
		cin >> a[i];
	}

	cout << endl << "Enter The Element You Wanna Find From Array: ";
	cin >> element;

	for(i=0;i<10;i++)
	{
		if(a[i] == element)
		{
			found = true;
			break;
		}
	}

	if(found) 
	{
		cout << "The Given Element was found on " << i+1 << "th position." << endl;
	}
	else
	{
		cout << "The Given Element Was Not Found :(" << endl;
	}
}