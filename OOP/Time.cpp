#include <iostream>
using namespace std;

class Time
{
	public:
	float convertTime(int min)
	{
		float hour=0.0;

		float Fmin=0.0;

		Fmin = (float)(min);

		hour = Fmin/60.0;

		cout << hour << endl;

		return hour;
	}
};

int main() 
{
	int min = 0;
	Time t;

	cout << "Enter The Minutes" << endl;
	cin >> min;

	cout << min << " minutes is equivalent to " << t.convertTime(min) << " hours";
}	