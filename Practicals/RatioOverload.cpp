#include <iostream>
using namespace std;

class Ratio
{
	protected:
		float a,b,final;
	public:
		Ratio() 
		{
			a = b = final = 0.0;
		}

		void assign(float _a, float _b)	 
		{
			a = _a;
			b = _b;
		}

		Ratio operator + (Ratio &r) 
		{
			Ratio result;
			result.final = ((b * r.a) + (r.b * a)) / (r.b * b);
			return result;
		}

		void print() 
		{
			cout << final;
		}
};

int main()
{	
	Ratio a,b,r;
	a.assign(1,2);
	b.assign(2,3);
	r = a + b;
	r.print();
	return 0;
}