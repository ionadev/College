#include <iostream>
using namespace std;

int main()
{
	int i=0,*a,no,element,found=0;

	cout << "Enter The Sie Of Array";
	cin >> no;

	a = new int(no);

	for(i=0;i<no;i++)
	{
		cout  << "Enter The" << i+1 << "th Element";
		cin >> a[i];
	}

	cout << "Enter The Elements To Find: ";
	cin >> element;

	for(i=0;i<no;i++)
	{
		if(a[i] == element) 
		{
			found++;
		}
	}

	cout << "The Given Element Was Found " << found << " Times!";
}