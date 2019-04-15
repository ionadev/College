#include <iostream>
using namespace std;

class Time
{
	public:
	void convertTime(int min)
	{
		cout << min << " minutes means " << min/60 << " hours and " << min%60 << " minutes";
	}
};

int main() 
{
	int min = 0;
	Time t;

	cout << "Enter The Minutes" << endl;
	cin >> min;

	t.convertTime(min);
}	