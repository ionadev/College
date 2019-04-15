#include <iostream>
using namespace std;

class Time
{
	public:
	void convertTime(int min)
	{
		if(min == 0) cout << "0 Minute Means Nothing!"
		else cout << min << " minutes means " << min/60 << " hours and " << min%60 << " minutes";
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