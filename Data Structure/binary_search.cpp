#include <iostream>
using namespace std;

int main()
{
	int a[5],s=0,i,low=0,high=5,mid=0;

	cout << "Enter 5 Elements Of The Array: " << endl;
	for(i=0;i<5;i++)
	{
		cin >> a[i];
	}

	cout << "Enter The Number To Search: ";
	cin >> s;

	while(low <= high)
	{
		mid = (low+high)/2;

		if(s == a[mid])
		{
			cout << "Found at " << mid+1 << "Position";
		}
		else
		{
			if(s<a[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid+1;
			}
		}
	}
}