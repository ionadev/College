#include <iostream>

class Ratio
{
	private: int numerator,denominator;
	public:
		void get()
		{
			cout << "Enter The Numerator: " << endl;
			cin >> numerator;
			cout << "Enter The Denominator: " << endl;
			cin >> denominator;
		}

		void calculate()
		{
			float result, newNumerator;

			newNumerator = (float)(numerator);

			result = newNumerator / denominator;

			cout << "The Division is: " << result << endl;
		}

		void reciprocal()
		{
			cout << "The Reciprocal Is: " << denominator << "/" << numerator;
		}
};

int main()
{
	Ratio r;

	r.get();
	r.calculate();
	r.reciprocal();
}