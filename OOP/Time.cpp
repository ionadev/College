#include <iostream>
using namespace std;

class Time
{
	public:
	int convertTime(int min)
	{
		int hour;

		hour = min/60;

		return hour;
	}
};

int main() 
{
	int min;
	Time t;

	cout << "Enter The Minutes" << endl;
	cin >> min;

	cout << "Hour is: " << t.convertTime(min);
}