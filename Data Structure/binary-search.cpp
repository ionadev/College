#include <iostream>
using namespace std;

int search(int *a,int lower,int upper,int x)
{
	int mid = (lower + end) / 2,location;

	while(lower<=upper && *a[mid] != x) 
	{
		if(x<*a[mid]) 
		{
			upper = mid - 1;
		}
		else 
		{
			lower = mid + 1;
		}

		mid = (lower + upper) / 2;
	}

	if(*a[mid] == x)
	{
		location = mid;
	}

	return location;
}

int main()	
{
	int a[10],i=0, element;

	cout << "Enter The Elements Of The Array" <<endl;

	for(i=0;i<10;i++)
	{
		cin >> a[i];
	}

	cout << "Enter the Element To Find:" <<endl;
	cin >> element;

	cout << search(&a,0,9,element);
}